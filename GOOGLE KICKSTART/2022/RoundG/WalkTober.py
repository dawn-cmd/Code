def main():
    T = int(input())
    for _ in range(T):
        m, n, p = map(int, input().split())
        score = []
        for i in range(m):
            score.append(list(map(int, input().split())))
            # print(score[-1])
        ans = 0
        for i in range(n):
            ans += max([score[j][i] for j in range(m)]) - score[p - 1][i]
        print(f"Case #{_ + 1}: {ans}")


main()
