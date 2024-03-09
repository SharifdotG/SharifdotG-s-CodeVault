while True:
    testCases = int(input())
    if testCases == 0:
        break

    for _ in range(testCases):
        people = int(input())

        if people % 2 == 0:
            print((people - 2) * 2 + 2)
        else:
            print((people - 1) * 2 + 1)
