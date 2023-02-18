def casein(d):
    d["g"] = []
    for i in range(3):
        d["g"].append(list(map(int, input().split())))
    d["g"][1].append(d["g"][1][1])
    d["g"][1][1] = -1

def caseout(d):
    ans = 0
    dir = [
        [0, 1],
        [1, 1],
        [1, 0],
        [1, -1],
    ]
    h = {}
    for i in range(4):
        mid = d["g"][1 + dir[i][0]][1 + dir[i][1]] + d["g"][1 - dir[i][0]][1 - dir[i][1]]
        if mid % 2 != 0:
            continue
        else:
            mid //= 2
        if h.get(mid, '') == '':
            h[mid] = 1
        else:
            h[mid] = h[mid] + 1
    for i in h:
        ans = max(ans, h[i])
    if d["g"][0][0] + d["g"][0][2] == d["g"][0][1] * 2:
        ans += 1
    if d["g"][2][0] + d["g"][2][2] == d["g"][2][1] * 2:
        ans += 1
    if d["g"][0][0] + d["g"][2][0] == d["g"][1][0] * 2:
        ans += 1
    if d["g"][0][2] + d["g"][2][2] == d["g"][1][2] * 2:
        ans += 1 
    return ans

def main():
    T = int(input())
    for Case in range(T):
        d = {}
        casein(d)
        print(f"Case #{Case + 1}: {caseout(d)}")
        
if __name__ == "__main__":
    main()