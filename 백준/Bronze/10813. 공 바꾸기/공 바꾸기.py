N,M = map(int, input().split())
box = list(range(1,N+1))
add = 0
for _ in range(M):
    i,j = map(int, input().split())
    add = box[i-1]
    box[i-1] = box[j-1]
    box[j-1] = add
for n in box:
    print(n, end=" ")