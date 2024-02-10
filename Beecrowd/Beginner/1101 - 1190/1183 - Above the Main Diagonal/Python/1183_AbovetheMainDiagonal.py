operation = input()
sum = 0

for i in range(12):
    for j in range(12):
        number = float(input())
        if j > i:
            sum += number

if operation == 'S':
    print(f"{sum:.1f}")
else:
    print(f"{sum / 66.0:.1f}")
