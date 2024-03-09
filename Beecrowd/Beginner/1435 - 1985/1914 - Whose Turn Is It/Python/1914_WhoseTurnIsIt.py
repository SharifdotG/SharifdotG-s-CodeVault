testCases = int(input())

for _ in range(testCases):
    player1, choice1, player2, choice2 = input().split()
    number1, number2 = map(int, input().split())

    if (number1 + number2) % 2 == 0:
        if choice1 == "PAR":
            print(player1)
        else:
            print(player2)
    else:
        if choice1 == "IMPAR":
            print(player1)
        else:
            print(player2)
