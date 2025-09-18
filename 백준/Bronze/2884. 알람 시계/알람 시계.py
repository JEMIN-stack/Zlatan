H,M = map(int, input().split(" "))
min = M - 45
if min < 0 and H == 0 :
    print(f"23 {60+min}")
elif min < 0:
    print(f"{H-1} {60+min}")
else :
    print(f"{H} {min}")