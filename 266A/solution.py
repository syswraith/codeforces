input();s=list(input());c=0
for x in range(len(s)-1):
    if s[x]==s[x+1]:c+=1
print(c)
