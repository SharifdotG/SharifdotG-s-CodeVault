number = int(input())

inCount = 0
outCount = 0

for _ in range(number):
    value = int(input())

    if 10 <= value <= 20:
        inCount += 1
    else:
        outCount += 1

print(f"{inCount} in")
print(f"{outCount} out")
