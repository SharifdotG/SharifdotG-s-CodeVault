import math


def gcd(a, b):
    return math.gcd(a, b)


def simplify(numerator, denominator):
    if denominator < 0:
        numerator = -numerator
        denominator = -denominator
    divisor = gcd(abs(numerator), abs(denominator))
    return numerator // divisor, denominator // divisor


def process_operation(n1, d1, n2, d2, op):
    if op == "+":
        result_numerator = n1 * d2 + n2 * d1
        result_denominator = d1 * d2
    elif op == "-":
        result_numerator = n1 * d2 - n2 * d1
        result_denominator = d1 * d2
    elif op == "*":
        result_numerator = n1 * n2
        result_denominator = d1 * d2
    elif op == "/":
        result_numerator = n1 * d2
        result_denominator = n2 * d1
    else:
        print("Invalid operator")
        return

    print(f"{result_numerator}/{result_denominator} ", end="")

    result_numerator, result_denominator = simplify(
        result_numerator, result_denominator
    )
    print(f"= {result_numerator}/{result_denominator}")


def main():
    import sys

    input = sys.stdin.read
    data = input().splitlines()

    T = int(data[0])
    for i in range(1, T + 1):
        line = data[i]
        parts = line.split()
        n1 = int(parts[0])
        d1 = int(parts[2])
        op = parts[3]
        n2 = int(parts[4])
        d2 = int(parts[6])

        process_operation(n1, d1, n2, d2, op)


if __name__ == "__main__":
    main()
