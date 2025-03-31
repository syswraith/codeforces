t = int(input())
for _ in range(t):
    counter = 0
    n,x = map(int,input().split())
    s = list(map(int, input().split()))
    for y in range(1, n):
        if min(s[:y]) * len(s[:y]) >= x or min(s[::-1][:y]) * len(s[::-1][:-1][:y]) >= x: counter+=1
    for y in s[1:-1]:
        if y >= x: counter+=1
    print(counter)
