testCases = int(input())

for _ in range(testCases):
    name, force = input().split()
    force = int(force)

    if name == "Thor":
        print("Y")
    else:
        print("N")
