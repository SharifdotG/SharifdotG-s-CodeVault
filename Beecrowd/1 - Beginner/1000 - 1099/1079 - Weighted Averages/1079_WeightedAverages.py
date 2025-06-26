number = int(input())

for i in range(number):
    a, b, c = map(float, input().split())

    average = (a * 2 + b * 3 + c * 5) / 10

    print("{:.1f}".format(average))
