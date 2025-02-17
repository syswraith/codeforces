n = int(input())
passengers = 0
mx_passengers = 0
for _ in range(n):
    a,b = map(int, input().split(' '))
    passengers += b - a
    mx_passengers = max(mx_passengers, passengers)
print(mx_passengers)
