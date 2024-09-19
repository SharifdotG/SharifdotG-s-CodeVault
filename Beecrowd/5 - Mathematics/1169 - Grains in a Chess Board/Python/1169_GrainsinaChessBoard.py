import math

n = int(input())

for _ in range(n):
    x = int(input())
    print(f"{int(math.pow(2, x) // 12000)} kg")
