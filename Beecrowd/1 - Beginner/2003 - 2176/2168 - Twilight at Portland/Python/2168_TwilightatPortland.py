cameras = int(input())

grid = []
for i in range(cameras + 1):
    grid.append(list(map(int, input().split())))

for i in range(cameras):
    for j in range(cameras):
        if grid[i][j] + grid[i][j + 1] + grid[i + 1][j] + grid[i + 1][j + 1] >= 2:
            print("S", end="")
        else:
            print("U", end="")
    print()
