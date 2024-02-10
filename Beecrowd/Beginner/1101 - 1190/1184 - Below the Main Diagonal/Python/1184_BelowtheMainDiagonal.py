operation = input()
sum_result = 0.0

for i in range(12):
    for j in range(12):
        number = float(input())
        
        if j < i:
            sum_result += number

if operation == 'S':
    print(f"{sum_result:.1f}")
else:
    print(f"{sum_result / 66.0:.1f}")
