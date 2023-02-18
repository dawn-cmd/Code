def main():
    n, m = map(int, input().split())
    n = int(''.join(reversed([c for c in str(n)])))
    m = int(''.join(reversed([c for c in str(m)])))
    ans = m + n
    ans = int(''.join(reversed([c for c in str(ans)]))) 
    print(ans)
    
if __name__ == "__main__":
    n = int(input())
    for _ in range(n):
        main()
