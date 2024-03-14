testCases = int(input())

for _ in range(testCases):
    hour, minute, event = map(int, input().split())

    if hour < 10:
        print(f"0{hour}", end="")
    else:
        print(hour, end="")

    print(":", end="")

    if minute < 10:
        print(f"0{minute}", end="")
    else:
        print(minute, end="")

    if event == 1:
        print(" - A porta abriu!")
    else:
        print(" - A porta fechou!")
