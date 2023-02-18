def main():
    packageNum = int(input())
    for _ in range(packageNum):
        fabrics = []
        n = int(input())
        for i in range(n):
            fabrics.append(list(input().split()))
            fabrics[-1][1] = int(fabrics[-1][1])
            fabrics[-1][2] = int(fabrics[-1][2])
        Ad = sorted(fabrics, key=lambda x: (x[0], x[2]))
        Ch = sorted(fabrics, key=lambda x: (x[1], x[2]))
        isSame = [0 if Ad[i] != Ch[i] else 1 for i in range(n)]
        print(f"Case #{_ + 1}: {isSame.count(1)}")

main()
