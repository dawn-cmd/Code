def main(case: int):
    n, m = map(int, input().split())
    c = list(map(int, input().split()))
    print(f"Case #{case}: {sum(c) % m}")

if __name__ == "__main__":
    t = int(input())
    for _ in range(1, t + 1):
        main(_)