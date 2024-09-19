while True:
    try:
        number = int(input())
    
        list_number = list(reversed(str(number)))
        size_number = len(list_number)
    
        for i in range(0,size_number):
            if(i == (size_number-1)):
                print(list_number[i], end = "\n")
            else:
                print(list_number[i], end = "")
                
        break
    except:
        break