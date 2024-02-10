import math

number = float(input())

result_1 = number / math.log(number)
result_2 = 1.25506 * (number / math.log(number))

print(f"{result_1:.1f} {result_2:.1f}")
