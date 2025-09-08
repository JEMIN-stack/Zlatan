A, B, C = map(int, input().split(" "))
list1 = [A,B,C]
list1.sort()
if list1[0] == list1[2]:
    print(f"{10000 + list1[0] * 1000}")
elif list1[0] == list1[1] or list1[1] == list1[2]:
    print(f"{1000 + list1[1] * 100}")
else:
    print(f"{list1[2] * 100}")