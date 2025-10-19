N,B = map(int, input().split())
N_10_dic = {}


for k in range(10):
    N_10_dic[str(k)] = k
for i in range(26):
    N_10_dic[chr(65+i)] = 10+i  

def change_N_to_B(N,B): 
    B_list = []
    result = ''
    while True:
        k = N % B
        B_list.append(k)
        N = N // B 
        if N == 0 :
            break
    B_list.reverse()
    for i in B_list:
        for s in N_10_dic:
            if i == N_10_dic[s]:
                result += str(s)
    return result
    
print(change_N_to_B(N,B))