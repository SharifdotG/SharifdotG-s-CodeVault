testCases = int(input())

for _ in range(testCases):
    number1, number2 = map(int, input().split())

    sum = 0

    if number1 > number2:
        for j in range(number2 + 1, number1):
            if j % 2 != 0:
                sum += j
    else:
        for j in range(number1 + 1, number2):
            if j % 2 != 0:
                sum += j

    print(sum)
