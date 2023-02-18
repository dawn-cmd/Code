def casein(d):
    d["n"], d["c"] = map(int, input().split())
    d["interval"] = []
    d["max"] = -1
    d["min"] = int(1e10) + 1
    for i in range(d["n"]):
        d["interval"].append(list(map(int, input().split())))
        d["max"] = max(d["max"], d["interval"][i][1])
        d["min"] = min(d["min"], d["interval"][i][0])

def caseout(d):
    h = {}
    for i in range(d["min"], d["max"] + 1):
        cnt = 0
        for j in range(d["n"]):
            if d["interval"][j][0] < i and d["interval"][j][1] > i:
                cnt += 1
        if h.get(cnt, 0) == 0:
            h[cnt] = 1
        else:
            h[cnt] = h[cnt] + 1
    ans = d["n"]
    for i in range(d["n"], -1, -1):
        if h.get(i, 0) > d["c"]:
            return ans
        else:
            ans += h.get(i, 0) * i
            d["c"] -= h.get(i, 0)
    return ans

def main():
    T = int(input())
    for Case in range(T):
        d = {}
        casein(d)
        print(f"Case #{Case + 1}: {caseout(d)}")

if __name__ == "__main__":
    main()
    