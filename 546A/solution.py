k,n,w=map(int,input().split(" "))
t=0
for x in range(1, w+1):t+=(x*k)
m=t-n
print(m)if m>0 else print(0)
