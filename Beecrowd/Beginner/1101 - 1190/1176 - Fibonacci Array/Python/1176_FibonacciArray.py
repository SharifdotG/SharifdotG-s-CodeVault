number = int(input())

fibonacci = [0] * 61
fibonacci[0] = 0
fibonacci[1] = 1

for i in range(2, 61):
    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2]

for _ in range(number):
    index = int(input())
    print(f"Fib({index}) = {fibonacci[index]}")
