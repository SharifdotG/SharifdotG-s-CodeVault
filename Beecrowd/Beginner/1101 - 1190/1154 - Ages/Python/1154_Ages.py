ages = []
while True:
    age = int(input())
    if age >= 0:
        ages.append(age)
    else:
        break

average = sum(ages) / len(ages) if ages else 0

print(f"{average:.2f}")
