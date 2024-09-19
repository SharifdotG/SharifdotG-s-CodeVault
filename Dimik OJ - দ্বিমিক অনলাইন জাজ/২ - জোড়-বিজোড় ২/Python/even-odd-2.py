testCases = int(input())

for _ in range(testCases):
    number = input()

    if int(number[-1]) % 2 == 0:
        print("even")
    else:
        print("odd")
