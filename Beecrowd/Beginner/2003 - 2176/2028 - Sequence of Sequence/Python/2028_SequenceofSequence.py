test_cases = 0
while True:
    try:
        test_cases += 1
        number = int(input())
        sequence = [0]
        
        for i in range(1, number+1):
            for j in range(i):
                sequence.append(i)
                
        if number == 0:
            print(f"Caso {test_cases}: {len(sequence)} numero")
        else:
            print(f"Caso {test_cases}: {len(sequence)} numeros")
            
        print(*sequence)
        print()
    except EOFError:
        break
