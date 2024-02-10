sum = 0

operation = input()

for i in range(12):
    for j in range(12):
        number = float(input())
        if j > i and j > 11 - i:
            sum += number
            
if operation == 'S':
    print(f"{sum:.1f}")
else:
    print(f"{sum / 30:.1f}")
