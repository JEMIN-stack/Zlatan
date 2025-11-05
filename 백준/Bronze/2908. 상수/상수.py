def rev3(n):
    a = n % 10
    b = (n // 10) % 10
    c = n // 100
    return a*100 + b*10 + c

A, B = map(int, input().split())
print(max(rev3(A), rev3(B)))
