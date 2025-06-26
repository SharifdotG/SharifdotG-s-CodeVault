n = int(input())

for _ in range(n):
    x = int(input())

    fib_values = [0] * (x + 1)
    call_counts = [0] * (x + 1)

    fib_values[0] = 0
    fib_values[1] = 1
    call_counts[0] = 1
    call_counts[1] = 1

    for j in range(2, x + 1):
        fib_values[j] = fib_values[j - 1] + fib_values[j - 2]
        call_counts[j] = call_counts[j - 1] + call_counts[j - 2] + 1

    if x == 0:
        print(f"fib({x}) = 1 calls = {fib_values[x]}")
    else:
        print(f"fib({x}) = {call_counts[x] - 1} calls = {fib_values[x]}")
