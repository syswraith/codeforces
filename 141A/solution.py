guest,host,pile = list(input()),list(input()),list(input())
for x in (guest + host):
    if x in pile:pile.remove(x)
    else:break
print("YES") if len(pile)==0 else print("NO")
