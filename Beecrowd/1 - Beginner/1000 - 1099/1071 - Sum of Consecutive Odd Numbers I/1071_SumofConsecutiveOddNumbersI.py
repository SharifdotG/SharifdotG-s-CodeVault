number1 = int(input())
number2 = int(input())
sum = 0

if number1 > number2:
    number1, number2 = number2, number1

for i in range(number1 + 1, number2):
    if i % 2 != 0:
        sum += i

print(sum)
