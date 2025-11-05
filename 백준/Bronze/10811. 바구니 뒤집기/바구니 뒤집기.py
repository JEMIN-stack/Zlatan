N,M = map(int, input().split())
N_list = list(range(1,N+1))

for _ in range(M):
    i,j = map(int, input().split())
    if i == j:
        N_list[i-1] = N_list[i-1]
    
    else:
        k = 0
        while True:
            temp = N_list[j-k-1]
            N_list[j-k-1] = N_list[i+k-1]
            N_list[i+k-1] = temp
            if j-k == i+k+2 or j-k == i+k+1:
                break
            k += 1

for i in N_list:
    print(i, end=" ")