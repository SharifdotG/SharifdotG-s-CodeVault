players = int(input())

totalServes = totalBlocks = totalAttacks = 0
totalServesOpponent = totalBlocksOpponent = totalAttacksOpponent = 0

for _ in range(players):
    name = input()

    serves, blocks, attacks = map(int, input().split())
    servesOpponent, blocksOpponent, attacksOpponent = map(int, input().split())

    totalServes += serves
    totalBlocks += blocks
    totalAttacks += attacks

    totalServesOpponent += servesOpponent
    totalBlocksOpponent += blocksOpponent
    totalAttacksOpponent += attacksOpponent

print(f"Pontos de Saque: {totalServesOpponent / totalServes * 100:.2f} %.")
print(f"Pontos de Bloqueio: {totalBlocksOpponent / totalBlocks * 100:.2f} %.")
print(f"Pontos de Ataque: {totalAttacksOpponent / totalAttacks * 100:.2f} %.")
