y = int(input())
for x in range(y+1, 10000):
    if len(set(list(str(x))))==4:print(x);break
