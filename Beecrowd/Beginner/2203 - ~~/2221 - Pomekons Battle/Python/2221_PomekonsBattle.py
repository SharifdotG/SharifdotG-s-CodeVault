testCases = int(input())

for _ in range(testCases):
    bonus = int(input())

    attackDabriel, defenseDabriel, levelDabriel = map(int, input().split())
    attackGuarte, defenseGuarte, levelGuarte = map(int, input().split())

    dabriel = (attackDabriel + defenseDabriel) / 2.0
    if levelDabriel % 2 == 0:
        dabriel += bonus

    guarte = (attackGuarte + defenseGuarte) / 2.0
    if levelGuarte % 2 == 0:
        guarte += bonus

    if dabriel > guarte:
        print("Dabriel")
    elif guarte > dabriel:
        print("Guarte")
    else:
        print("Empate")
