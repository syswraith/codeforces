center = [2,2]
matrix = []
coordinates = []
counter = 0

for x in range(5): matrix.append(list(map(int,input().split(" "))))

for x in matrix:
    if 1 in x: 
        coordinates.append(matrix.index(x)) ; coordinates.append(x.index(1))

def judge():
    if (coordinates[0] > center[0]): coordinates[0]-=1
    elif (coordinates[0] < center[0]): coordinates[0]+=1
    elif (coordinates[1] > center[1]): coordinates[1]-=1
    elif (coordinates[1] < center[1]): coordinates[1]+=1

while coordinates != center: counter += 1 ; judge()
print(counter)

