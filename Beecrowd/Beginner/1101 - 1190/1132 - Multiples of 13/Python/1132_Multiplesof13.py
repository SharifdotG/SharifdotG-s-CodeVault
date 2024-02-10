value1 = int(input())
value2 = int(input())

if value1 > value2:
    value1, value2 = value2, value1

sum = 0

for i in range(value1, value2 + 1):
    if i % 13 != 0:
        sum += i

print(sum)
