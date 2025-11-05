N,M = map(int, input().split())
box = [0] * N
for _ in range(M):
    i,j,k = map(int, input().split())
    for x in range(i-1,j):
        box[x] = k
for i in box:
    print(i, end=" ")