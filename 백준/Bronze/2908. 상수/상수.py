A,B = map(str,input().split())
a= list(A)
b= list(B)
a[0] , a[2] = a[2] , a[0]
b[0] , b[2] = b[2] , b[0]
total1 =''
total2 =''
for i in range(3):
    total1 += a[i]
    total2 += b[i]
c = int(total1)
d = int(total2)

if c >= d :
    print(c)
else:
    print(d)