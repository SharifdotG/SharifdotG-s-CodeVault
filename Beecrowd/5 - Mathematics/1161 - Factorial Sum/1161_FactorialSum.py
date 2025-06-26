import sys
import math


input = sys.stdin.read()
lines = input.strip().split("\n")

for line in lines:
    a, b = map(int, line.split())
    sum = 0

    for i in range(2):
        n = a if i == 0 else b
        fact = math.factorial(n)
        sum += fact

    print(sum)
