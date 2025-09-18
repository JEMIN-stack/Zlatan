A,B = map(int, input().split(" "))
C = int(input())
sum = B + C
hour = sum // 60
min = sum % 60
if A+hour >= 24:
    print(f"{A+hour-24} {min}")
else:
    print(f"{A+hour} {min}")