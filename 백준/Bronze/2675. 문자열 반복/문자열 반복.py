T = int(input())
for _ in range(T):
    R,S = map(str,input().split())
    for s in S:
        print(f"{s*int(R)}", end="")
    print()