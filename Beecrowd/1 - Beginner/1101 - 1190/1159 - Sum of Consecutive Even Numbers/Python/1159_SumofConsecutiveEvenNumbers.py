while True:
    number = int(input())
    
    if number == 0:
        break
    
    sum_result = 0
    
    if number % 2 == 0:
        for i in range(5):
            sum_result += number
            number += 2
    else:
        number += 1
        
        for i in range(5):
            sum_result += number
            number += 2
    
    print(sum_result)
