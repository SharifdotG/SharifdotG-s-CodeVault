divers = int(input())

for _ in range(divers):
    name = input()
    difficulty = float(input())
    grades = [float(x) for x in input().split()]

    grades.sort()

    total = sum(grades[1:6])

    print(f"{name} {total * difficulty:.2f}")
