positiveNumbers = 0

for _ in range(6):
    number = float(input())
    
    if number > 0:
        positiveNumbers += 1

print(f"{positiveNumbers} valores positivos")
