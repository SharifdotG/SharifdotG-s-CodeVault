while True:
    arraySize = int(input())
    if arraySize == 0:
        break

    matrix = [[0 for _ in range(arraySize)] for _ in range(arraySize)]
    counter = 1

    for i in range(arraySize):
        for j in range(i, arraySize - i):
            for k in range(i, arraySize - i):
                matrix[j][k] = counter

        counter += 1

    for i in range(arraySize):
        print(" ".join(f"{matrix[i][j]:>3}" for j in range(arraySize)))
    print()
