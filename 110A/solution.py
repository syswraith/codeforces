magic_count = 0
for x in input():
    if x == '4' or x == '7': magic_count += 1
print("YES" if magic_count == 4 or magic_count == 7 else "NO")
