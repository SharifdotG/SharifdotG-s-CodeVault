test_cases = int(input())

for _ in range(test_cases):
    player1 = input()
    player2 = input()

    if player1 == "ataque" and player2 == "pedra":
        print("Jogador 1 venceu")
    elif player1 == "pedra" and player2 == "ataque":
        print("Jogador 2 venceu")
    elif player1 == "pedra" and player2 == "papel":
        print("Jogador 1 venceu")
    elif player1 == "papel" and player2 == "pedra":
        print("Jogador 2 venceu")
    elif player1 == "papel" and player2 == "ataque":
        print("Jogador 2 venceu")
    elif player1 == "ataque" and player2 == "papel":
        print("Jogador 1 venceu")
    elif player1 == "papel" and player2 == "papel":
        print("Ambos venceram")
    elif player1 == "pedra" and player2 == "pedra":
        print("Sem ganhador")
    elif player1 == "ataque" and player2 == "ataque":
        print("Aniquilacao mutua")
