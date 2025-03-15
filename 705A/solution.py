n = int(input())
arr = []
for x in range(n):
    if x%2==0: arr.append("I hate")
    else: arr.append("I love")
print(" that ".join(arr) + " it")
