number = int(input())

for i in range(1, 7):
    if number % 2 != 0:
        print(number)
    else:
        number += 1
        print(number)
    
    number += 2
