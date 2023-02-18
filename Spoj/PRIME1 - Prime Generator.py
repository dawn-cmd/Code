from math import sqrt
from collections import defaultdict


primes = []
h = defaultdict(lambda: 1)

def main():
    st, ed = map(int, input().split())
    if sqrt(ed) + 1 > len(h):
        for i in range(2, int(sqrt(ed)) + 1):
            if h[i] == 1:
                primes.append(i)
            for num in primes:
                if (i * num) ** 2 > ed:
                    break
                h[i * num] = 0
                if i % num == 0:
                    break
    ans = defaultdict(lambda: 1)
    for prime in primes:
        for times in range(max(st // prime, 2), ed // prime + 2):
            if st <= prime * times <= ed:
                ans[prime * times] = 0
    for i in range(max(st, 2), ed + 1):
        if ans[i] == 1:
            print(i)

if __name__ == "__main__":
    n = int(input())
    for _ in range(n):
        main()
