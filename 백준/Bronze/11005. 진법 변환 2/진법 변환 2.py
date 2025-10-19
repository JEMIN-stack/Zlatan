N, B = map(int, input().split())
digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

if N == 0:
    print(0)
else:
    out = []
    while N > 0:
        out.append(digits[N % B])
        N //= B
    print(''.join(reversed(out)))