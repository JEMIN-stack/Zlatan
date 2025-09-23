d = {}
ch = 2
total = 0
for i in range(80,91):
    if i > 79 and i < 84:
        d[str(chr(i))] = 7
    elif i > 83 and i < 87:
        d[str(chr(i))] = 8
    else:
        d[str(chr(i))] = 9
        
for i in range(65,80,3):
    for j in range(3):
        d[str(chr(i+j))] = ch 
    ch += 1

word = input().strip()
for w in word:
    total += d[w]
print(total+len(word))