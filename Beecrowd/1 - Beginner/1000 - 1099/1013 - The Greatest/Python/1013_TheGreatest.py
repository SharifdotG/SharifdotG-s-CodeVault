a, b, c = list(map(int, input().split()))

maiorAB = (a + b + abs(a - b)) // 2
maiorABC = (maiorAB + c + abs(maiorAB - c)) // 2

print(maiorABC, "eh o maior")