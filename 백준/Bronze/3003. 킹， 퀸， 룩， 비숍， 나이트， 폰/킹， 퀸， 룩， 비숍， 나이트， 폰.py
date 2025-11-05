dict = {'king':1, 'queen':1, 'look':2, 'bishop':2, 'knight':2, 'phone':8}
chess_num = list(map(int, input().split()))
k = 0
for i in dict:
    print(f"{dict[i]-chess_num[k]}",end=' ')
    k += 1