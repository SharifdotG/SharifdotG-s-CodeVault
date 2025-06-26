denominatorRepetitions = float(input())

result = 0

for i in range(int(denominatorRepetitions)):
    if i == 0:
        result = 1 / (6 + result)
    else:
        result = 1 / (6 + result)

print(f"{result + 3:.10f}")
