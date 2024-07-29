testCases = int(input())

for i in range(testCases):
    peoples, steps = map(int, input().split())

    people = list(range(1, peoples + 1))

    idx = 0
    while len(people) > 1:
        idx = (idx + steps - 1) % len(people)
        people.pop(idx)

    print(f"Case {i + 1}: {people[0]}")
