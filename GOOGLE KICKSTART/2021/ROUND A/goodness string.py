def data_input(d):
    d["len"], d["target"] =map(int, input().split())
    d["str"] = input() 

def data_output(d):
    score = 0
    for i in range(len(d["str"]) // 2):
        if(d["str"][i] != d["str"][d["len"] - 1 - i]):
            score += 1
    return abs(score - d["target"])

def main():
    t = int(input())
    for i in range(t):
        d = {}
        data_input(d)
        print(f"Case #{i + 1}: {data_output(d)}")
try:
    if __name__ == "__main__":
        main()
except SystemExit:
    pass

