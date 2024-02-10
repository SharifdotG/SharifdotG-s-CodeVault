number = int(input())

for _ in range(number):
    x, y = map(int, input().split())

    if x % 2 == 0:
        x += 1

    sum = 0

    for j in range(y):
        sum += x
        x += 2

    print(sum)
