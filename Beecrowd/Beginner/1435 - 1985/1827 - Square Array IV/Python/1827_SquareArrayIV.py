while True:
    try:
        array_size = int(input())
        matrix = [[0 for _ in range(array_size)] for _ in range(array_size)]

        for i in range(array_size):
            matrix[i][i] = 2
            matrix[i][array_size - i - 1] = 3

        middle = array_size // 3

        for i in range(middle, array_size - middle):
            for j in range(middle, array_size - middle):
                matrix[i][j] = 1

        matrix[array_size // 2][array_size // 2] = 4

        for row in matrix:
            print(''.join(map(str, row)))

        print()

    except EOFError:
        break
