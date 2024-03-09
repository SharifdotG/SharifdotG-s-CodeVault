while True:
    arraySize = int(input())
    if arraySize == 0:
        break

    matrix = [[abs(i - j) + 1 for j in range(arraySize)] for i in range(arraySize)]

    for row in matrix:
        print(" ".join(f"{x:3d}" for x in row))

    print()
