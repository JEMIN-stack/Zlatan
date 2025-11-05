croatia_word= ["dz=","c=", "c-", "d-", "lj", "nj", "s=", "z="]
word = input().strip()

for c in croatia_word:
    word = word.replace(c, '#')   # 임의의 1글자 토큰으로 치환

print(len(word))