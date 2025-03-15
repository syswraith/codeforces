n=int(input())
group_no = 0
groups = []
for x in range(n):
    c = int(input())
    if len(groups) == 0:
        group_no+=1
    elif groups[-1] != c: 
        group_no+=1
    groups.append(c)
print(group_no)
