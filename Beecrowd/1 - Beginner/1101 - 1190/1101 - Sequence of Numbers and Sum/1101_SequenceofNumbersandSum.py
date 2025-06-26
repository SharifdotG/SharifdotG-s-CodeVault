while True:
    numbers = input().split()
    number1 = int(numbers[0])
    number2 = int(numbers[1])

    if number1 > 0 and number2 > 0:
        sum_result = 0

        if number1 > number2:
            number1, number2 = number2, number1

        for i in range(number1, number2 + 1):
            print(i, end=" ")
            sum_result += i

        print(f"Sum={sum_result}")
    else:
        break
