while True:
    increaseEXP, monsterEXP = map(int, input().split())
    
    if increaseEXP == 0 or monsterEXP == 0:
        break

    print(increaseEXP * monsterEXP)
