x = int(input())
z = int(input())

while z <= x:
    z = int(input())

sum_val = 0
count = 0

for i in range(x, z + 1):
    sum_val += i
    count += 1
    
    if sum_val > z:
        break

print(count)
