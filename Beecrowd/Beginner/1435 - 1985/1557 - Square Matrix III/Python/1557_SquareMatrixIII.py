import math

while True:
    array_size = int(input())
    
    if array_size == 0:
        break

    matrix = [[0 for _ in range(array_size)] for _ in range(array_size)]

    for i in range(array_size):
        for j in range(array_size):
            matrix[i][j] = 2 ** (i + j)

    max_width = int(math.log10(matrix[array_size - 1][array_size - 1])) + 1

    for i in range(array_size):
        for j in range(array_size - 1):
            print(f"{matrix[i][j]:>{max_width}}", end=" ")
            
        print(f"{matrix[i][array_size - 1]:>{max_width}}")

    print()
