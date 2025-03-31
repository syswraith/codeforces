t=int(input())
for _ in range(t):
    date={"0":3,"1":1,"2":2,"3":1,"5":1}
    n=int(input())
    a=list(map(int,input().split()))
    counter = 0
    if not all(date[k]<=a.count(int(k))for k in date):
        print(0)
        continue
    for x in a:
        e=str(x)
        if all(v==0 for v in date.values()):
            break
        if e in date and date[e]!=0:
            date[e]-=1
        counter+=1
    print(counter)

