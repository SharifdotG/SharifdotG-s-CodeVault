test_cases = int(input())

for i in range(1, test_cases + 1):
    sheldon, raj = input().split()

    if sheldon == "tesoura" and raj == "papel":
        print(f"Caso #{i}: Bazinga!")
    elif sheldon == "papel" and raj == "pedra":
        print(f"Caso #{i}: Bazinga!")
    elif sheldon == "pedra" and raj == "lagarto":
        print(f"Caso #{i}: Bazinga!")
    elif sheldon == "lagarto" and raj == "Spock":
        print(f"Caso #{i}: Bazinga!")
    elif sheldon == "Spock" and raj == "tesoura":
        print(f"Caso #{i}: Bazinga!")
    elif sheldon == "tesoura" and raj == "lagarto":
        print(f"Caso #{i}: Bazinga!")
    elif sheldon == "lagarto" and raj == "papel":
        print(f"Caso #{i}: Bazinga!")
    elif sheldon == "papel" and raj == "Spock":
        print(f"Caso #{i}: Bazinga!")
    elif sheldon == "Spock" and raj == "pedra":
        print(f"Caso #{i}: Bazinga!")
    elif sheldon == "pedra" and raj == "tesoura":
        print(f"Caso #{i}: Bazinga!")
    elif sheldon == raj:
        print(f"Caso #{i}: De novo!")
    else:
        print(f"Caso #{i}: Raj trapaceou!")
