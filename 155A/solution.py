a=0
input()
n=list(map(int,input().split(' ')))
manx=n[0]
minx=n[0]
for x in n[1:]:
    if len(n)==1: break
    if manx < x:
        manx = x
        a += 1
    elif minx > x:
        minx = x
        a+=1
print(a)
