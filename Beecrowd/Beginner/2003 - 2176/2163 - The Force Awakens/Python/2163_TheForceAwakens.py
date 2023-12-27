rows, columns = map(int, input().split())

matrix = []
for _ in range(rows):
    row = list(map(int, input().split()))
    matrix.append(row)

count = 0

for i in range(1, rows - 1):
    for j in range(1, columns - 1):
        if matrix[i][j] == 42:
            if matrix[i - 1][j - 1] == 7 and matrix[i - 1][j] == 7 and matrix[i - 1][j + 1] == 7:
                if matrix[i][j - 1] == 7 and matrix[i][j + 1] == 7:
                    if matrix[i + 1][j - 1] == 7 and matrix[i + 1][j] == 7 and matrix[i + 1][j + 1] == 7:
                        print(i + 1, j + 1)
                        count += 1
                        break
    if count > 0:
        break

if count == 0:
    print("0 0")
