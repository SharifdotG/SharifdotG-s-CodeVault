while True:
    try:
        arraySize = int(input())
        matrix = [[0 for _ in range(arraySize)] for _ in range(arraySize)]

        for i in range(arraySize):
            matrix[i][i] = 1
            matrix[i][arraySize - i - 1] = 2

            for j in range(arraySize):
                if i != j and j != arraySize - i - 1:
                    matrix[i][j] = 3

        for row in matrix:
            print(''.join(map(str, row)))

    except EOFError:
        break
