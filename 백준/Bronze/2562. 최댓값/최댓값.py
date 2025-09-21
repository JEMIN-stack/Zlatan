A = []
for _ in range(9):
    N = int(input())
    A.append(N)
print(max(A))
for i in range(9):
    if max(A) == A[i]:
        print(i+1)