z=0
x=list(input().lower())
y=list(input().lower())

if x == y: z=0
else:
    for e in x:
        index = x.index(e)
        if ord(x[index]) > ord(y[index]): z+=1
        elif ord(x[index]) < ord(y[index]): z-=1
print(z)
