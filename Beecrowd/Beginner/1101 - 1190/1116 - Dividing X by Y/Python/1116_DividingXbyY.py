number = int(input())

for _ in range(number):
    value1, value2 = map(int, input().split())

    if value2 == 0:
        print("divisao impossivel")
    else:
        print("{:.1f}".format(value1 / value2))
