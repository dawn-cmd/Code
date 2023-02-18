def main():
    T = int(input())
    for _ in range(T):
        n = int(input())
        a = list(map(int, input().split()))
        aPrefix = [a[0]]
        for i in range(1, len(a)):
            aPrefix.append(aPrefix[-1] + a[i])
        jumpTo = []
        for i in range(len(a)):
            if a[i] >= 0:
                jumpTo.append(i)
                continue
            j = i
            while aPrefix[i] - aPrefix[j] + a[j] < 0 and j >= 0:
                j -= 1
            jumpTo.append(j)
        # print(jumpTo)
            
        def check(x: int, y: int) -> bool:
            cnt = 0
            for k in range(x, y + 1):
                cnt += a[k]
                if cnt < 0: return False
            return True
        
        ans = 0
        for i in range(len(a)):
            j = i
            while j >= 0:
                j = jumpTo[j]
                # print(j, i)
                if j < 0:
                    break
                ans += aPrefix[i] - aPrefix[j] + a[j]
                j -= 1
        print(f"Case #{_ + 1}: {ans}")
        
    
if __name__ == '__main__':
    main()
        