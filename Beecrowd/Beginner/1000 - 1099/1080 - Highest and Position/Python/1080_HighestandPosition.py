highest = 0
position = 0

for i in range(1, 101):
    number = int(input())
    
    if number > highest:
        highest = number
        position = i

print(highest)
print(position)
