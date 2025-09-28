word = input().upper()
wd_set_ls = list(set(word))
wd_num = []
max_ls = []
for i in range(len(wd_set_ls)):
     wd_num.append(word.count(wd_set_ls[i]))
for j in wd_num:
    if j == max(wd_num):
        max_ls.append(wd_num.index(j))
        
if len(max_ls) > 1 :
    print("?")
else :
    print(wd_set_ls[max_ls[0]])