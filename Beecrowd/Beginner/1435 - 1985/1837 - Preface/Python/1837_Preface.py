a, b = map(int, input().split())

quotient = a // b
remainder = a % b

if remainder < 0:
    remainder += abs(b)
    quotient = (a - remainder) // b

print(quotient, remainder)
