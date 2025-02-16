t = int(input())

for x in range(t): 
    a,b,c = map(int, input().split(' '))
    print("YES" if (((a+b) == c) or ((b+c) == a) or ((a+c) == b)) else "NO")
