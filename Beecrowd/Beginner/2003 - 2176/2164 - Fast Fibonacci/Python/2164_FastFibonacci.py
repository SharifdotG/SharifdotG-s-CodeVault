import math

number = int(input())

result = (math.pow(((1 + math.sqrt(5)) / 2), number) - math.pow(((1 - math.sqrt(5)) / 2), number)) / math.sqrt(5)
print("{:.1f}".format(result))
