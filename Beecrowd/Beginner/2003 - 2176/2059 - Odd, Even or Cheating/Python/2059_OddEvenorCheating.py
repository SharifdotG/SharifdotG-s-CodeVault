player1Choice, player1Numbers, player2Numbers, ifPlayer1Cheated, player1Accused = map(int, input().split())

if ifPlayer1Cheated == 1 and player1Accused == 1:
    print("Jogador 2 ganha!")
elif ifPlayer1Cheated == 1 and player1Accused == 0:
    print("Jogador 1 ganha!")
elif ifPlayer1Cheated == 0 and player1Accused == 1:
    print("Jogador 1 ganha!")
else:
    if player1Choice == 1:
        if (player1Numbers + player2Numbers) % 2 == 0:
            print("Jogador 1 ganha!")
        else:
            print("Jogador 2 ganha!")
    else:
        if (player1Numbers + player2Numbers) % 2 == 0:
            print("Jogador 2 ganha!")
        else:
            print("Jogador 1 ganha!")
