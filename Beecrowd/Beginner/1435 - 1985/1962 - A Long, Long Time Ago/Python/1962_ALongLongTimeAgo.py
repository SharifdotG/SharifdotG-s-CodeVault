testCases = int(input())

for _ in range(testCases):
    yearsPassed = int(input())

    if yearsPassed < 2015:
        print(f"{2015 - yearsPassed} D.C.")
    else:
        print(f"{yearsPassed - 2014} A.C.")
