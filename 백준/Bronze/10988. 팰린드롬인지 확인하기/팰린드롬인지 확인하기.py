word = str(input())
i = -1
l = len(word)
total = 1
while True:
    i += 1
    l -= 1
    if word[i] != word[l]:
        total = 0
        break
    elif i >= l:
        break
    else:
        total = 1
              
print(total)