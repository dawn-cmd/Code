from collections import deque


def main():
    exp = input()  # expression
    ans = ""
    h = {'+': 0, '-': 0, '*': 1, '/': 1, '^': 2, '(': -1, ')': -1}
    stk = deque()
    for c in exp:
        if c not in ['+', '-', '*', '/', '^', '(', ')']:
            ans += c
            continue
        if c == '(':
            stk.append(c)
            continue
        while stk and h[c] < h[stk[-1]] and stk[-1] != '(':
            ans += stk.pop()
        if c == ')' and stk[-1] == '(':
            stk.pop()
            continue
        stk.append(c)
    print(ans)

if __name__ == "__main__":
    n = int(input())
    for _ in range(n):
        main()
