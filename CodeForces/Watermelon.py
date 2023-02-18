def main():
    n = int(input())
    for i in range(1, n - 1):
        if i % 2 == 0 and (n - i) % 2 == 0:
            print("YES")
            return 
    print("NO")
    return

if __name__ == "__main__":
    main()
