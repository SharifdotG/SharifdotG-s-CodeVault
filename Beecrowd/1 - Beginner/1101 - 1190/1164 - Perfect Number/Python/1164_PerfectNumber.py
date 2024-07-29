test_cases = int(input())

for _ in range(test_cases):
    number = int(input())
    sum_divisors = 0

    for j in range(1, number):
        if number % j == 0:
            sum_divisors += j

    if sum_divisors == number:
        print(f"{number} eh perfeito")
    else:
        print(f"{number} nao eh perfeito")
