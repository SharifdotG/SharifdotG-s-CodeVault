line = input()
operation = input()
line = int(line)
sum_val = 0.0

for i in range(12):
    for j in range(12):
        number = float(input())

        if i == line:
            sum_val += number

if operation == 'S':
    print(f"{sum_val:.1f}")
else:
    print(f"{sum_val / 12.0:.1f}")
