number_sum = 0
count = 0

while count < 2:
    number = float(input())
    
    if 0 <= number <= 10:
        number_sum += number
        count += 1
    else:
        print("nota invalida")

average = number_sum / 2

print(f"media = {average:.2f}")

while True:
    print("novo calculo (1-sim 2-nao)")
    option = int(input())
    
    if option == 1:
        number_sum = 0
        count = 0
        
        while count < 2:
            number = float(input())
            
            if 0 <= number <= 10:
                number_sum += number
                count += 1
            else:
                print("nota invalida")
        
        average = number_sum / 2
        
        print(f"media = {average:.2f}")
    elif option == 2:
        break
