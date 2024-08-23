def digits(n, d):
    count = 0
    pow = 1
    rem = 0

    while n:
        x = n % 10
        n //= 10

        if x > d:
            count += (n + 1) * pow
        else:
            count += n * pow

        if x == d:
            count += rem + 1

        if d == 0:
            count -= pow

        rem += x * pow
        pow *= 10

    return count


while True:
    a, b = map(int, input().split())
    if a == 0 and b == 0:
        break

    result = []
    for i in range(10):
        result.append(str(digits(b, i) - digits(a - 1, i)))

    print(" ".join(result))
