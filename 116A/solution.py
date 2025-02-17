n=int(input())
stops=[]
mxpassengers=[]
passengers=0
stops=[list(map(int,input().split(' ')))for _ in range(n)]
for x in stops: 
    passengers += x[1]-x[0]
    mxpassengers.append(passengers)
print(max(mxpassengers))
