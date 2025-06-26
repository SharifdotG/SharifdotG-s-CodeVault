count = 0
pos = 0
i = 1

while True:
    try:
        subsequence = input()
        sequence = input()

        while pos != -1:
            pos = sequence.find(subsequence, pos)

            if pos != -1:
                count += 1
                pos += 1

        print(f"Caso #{i}:")
        if count == 0:
            print("Nao existe subsequencia")
        else:
            print(f"Qtd.Subsequencias: {count}")
            print(f"Pos: {sequence.rfind(subsequence) + 1}")

        print()
        
        count = pos = 0
        
        i += 1

    except EOFError:
        break
