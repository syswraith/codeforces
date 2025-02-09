for x in range(int(input())):
    s=list(input())
    check=0
    for x in range(len(s)-1):
        if s[x]==s[x+1]: 
            check=1
            break
    print(1 if check==1 else len(s))
