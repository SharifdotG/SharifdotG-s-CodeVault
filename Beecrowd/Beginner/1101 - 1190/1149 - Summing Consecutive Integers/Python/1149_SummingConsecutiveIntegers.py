numbers = list(map(int, input().split()))
i = 1
sum = 0

while numbers[i] <= 0:
    if numbers[i] <= 0:
        i += 1
    if numbers[i] > 0:
        break

for j in range(0, numbers[i]):
    sum += numbers[0] + j
    
print(sum)