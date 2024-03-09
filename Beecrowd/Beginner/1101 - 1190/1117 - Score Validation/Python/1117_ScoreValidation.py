count = 0
average = 0

while count < 2:
    number = float(input())

    if 0 <= number <= 10:
        average += number
        count += 1
    else:
        print("nota invalida")

print(f"media = {average / 2:.2f}")
