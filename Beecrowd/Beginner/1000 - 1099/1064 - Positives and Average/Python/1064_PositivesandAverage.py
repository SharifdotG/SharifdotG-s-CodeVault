count = 0
sum_val = 0

for i in range(6):
    number = float(input())

    if number > 0:
        count += 1
        sum_val += number

print(f"{count} valores positivos")
if count > 0:
    print(f"{sum_val / count:.1f}")
