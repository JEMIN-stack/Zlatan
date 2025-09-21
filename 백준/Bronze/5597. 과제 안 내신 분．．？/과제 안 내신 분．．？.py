N = list(range(1,31))
ass = []
for _ in range(28):
    n = int(input())
    ass.append(n)
result = [item for item in N if item not in ass]
print(min(result))
print(max(result))