number = []

for _ in range(20):
    number.append(int(input()))

for i in range(20):
    print(f"N[{i}] = {number[19 - i]}")
