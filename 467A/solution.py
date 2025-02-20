n = int(input())
counter = n
for x in range(n):
    arr = list(map(int, input().split(' ')))
    if ((arr[1] - arr[0]) == 0) or ((arr[1] - arr[0]) == 1): counter-=1
print(counter)
