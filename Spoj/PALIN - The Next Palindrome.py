def main():
    n = input()
    if len(n) % 2 == 0:
        n = n[:len(n) // 2] + '#' + n[len(n) // 2:]
    ans = n[:len(n) // 2 + 1] + n[len(n) // 2 - 1::-1]
    if ans > n:
        print(ans.replace('#', ''))
        return
    

if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        main()
