N = int(input())
A = list(map(int, input().split()))
total = 0
for i in A:
    total += i / max(A) * 100
print(float(total/N))