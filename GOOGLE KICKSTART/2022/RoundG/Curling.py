import math
from typing import List


def dis(a: List[int]) -> float:
    return math.sqrt(a[0] ** 2 + a[1] ** 2)


def main():
    T = int(input())
    for _ in range(T):
        rs, rh = map(int, input().split())
        n = int(input())
        red = []
        for i in range(n):
            red.append(dis(list(map(int, input().split()))))
            if red[-1] > rs + rh:
                red.pop()
        n = len(red)
        red.sort()
        m = int(input())
        yellow = []
        for i in range(m):
            yellow.append(dis(list(map(int, input().split()))))
            if yellow[-1] > rs + rh:
                yellow.pop()
        m = len(yellow)
        yellow.sort()
        scoreRed = 0
        if len(yellow) == 0:
            scoreRed = len(red)
        else:
            for i in range(n):
                if red[i] < yellow[0]:
                    scoreRed += 1
                else:
                    break
        scoreYellow = 0
        if len(red) == 0:
            scoreYellow = len(yellow)
        else:
            for i in range(m):
                if yellow[i] < red[0]:
                    scoreYellow += 1
                else:
                    break
        print(f"Case #{_ + 1}: {scoreRed} {scoreYellow}")


if __name__ == '__main__':
    main()
