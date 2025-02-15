input()
n=list(input())
a,d=0,0
for x in n:
    if x=="A":a+=1
    else:d+=1
if a>d:print("Anton")
elif a<d:print("Danik")
else:print("Friendship")
