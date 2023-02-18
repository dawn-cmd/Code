MOD = 1e9 + 7

def casein(d):
    d["n"], d["k"] = map(int, input().split())
    d["str"] = input()

def predo(d):
    d["power"] = [1]
    for i in range(1, d["n"] + 1):
        d["power"].append(d["power"][i - 1] * d["k"] % MOD)

def caseout(d):
    mid = d["n"] // 2 if d["n"] % 2 == 0 else d["n"] // 2 + 1
    ans = 0
    for i in range(mid):
        ans = (ans + (ord(d["str"][i]) - ord('a')) * d["power"][mid - 1 - i] % MOD) % MOD
    limit = False
    for i in range(mid - 1, -1, -1):
        if d["str"][i] < d["str"][d["n"] - 1 - i]:
            limit = True
            break
        elif d["str"][i] > d["str"][d["n"] - 1 - i]:
            limit = False
            break
    if limit == True:
        ans = (ans + 1) % MOD
    return int(ans)

def main():
    T = int(input())
    for Case in range(T):
        d = {}
        casein(d)
        predo(d)
        print(f"Case #{Case + 1}: {caseout(d)}")

if __name__ == "__main__":
    main() 