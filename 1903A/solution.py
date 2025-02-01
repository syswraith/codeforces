for x in range(int(input())):
    n,k = list(map(int,input().split(' ')))
    arr = list(map(int,input().split(' ')))
    if arr == sorted(arr): print("YES")
    else: print("NO") if k <= 1 else print("YES")
