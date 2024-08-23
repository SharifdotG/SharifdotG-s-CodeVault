import math

n = int(input())

for _ in range(n):
    f, c = map(int, input().split())
    print(math.gcd(f, c))
