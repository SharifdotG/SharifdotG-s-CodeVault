number = int(input())

for _ in range(number):
    value = int(input())
    is_prime = True

    for j in range(2, value):
        if value % j == 0:
            is_prime = False
            break

    if is_prime:
        print(f"{value} eh primo")
    else:
        print(f"{value} nao eh primo")
