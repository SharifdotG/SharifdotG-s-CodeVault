value1 = int(input())
value2 = int(input())

if value1 > value2:
    value1, value2 = value2, value1

for i in range(value1 + 1, value2):
    if i % 5 == 2 or i % 5 == 3:
        print(i)
