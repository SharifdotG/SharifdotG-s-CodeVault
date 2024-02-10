#include <stdio.h>

int main() {
    int players;
    scanf("%d", &players);

    int totalServes = 0, totalBlocks = 0, totalAttacks = 0;
    int totalServesOpponent = 0, totalBlocksOpponent = 0, totalAttacksOpponent = 0;

    while (players--) {
        char name[100];
        scanf("%s", name);

        int serves, blocks, attacks;
        scanf("%d %d %d", &serves, &blocks, &attacks);

        int servesOpponent, blocksOpponent, attacksOpponent;
        scanf("%d %d %d", &servesOpponent, &blocksOpponent, &attacksOpponent);
        
        totalServes += serves;
        totalBlocks += blocks;
        totalAttacks += attacks;

        totalServesOpponent += servesOpponent;
        totalBlocksOpponent += blocksOpponent;
        totalAttacksOpponent += attacksOpponent;
    }

    printf("Pontos de Saque: %.2f %%.\n", (double) totalServesOpponent / totalServes * 100);
    printf("Pontos de Bloqueio: %.2f %%.\n", (double) totalBlocksOpponent / totalBlocks * 100);
    printf("Pontos de Ataque: %.2f %%.\n", (double) totalAttacksOpponent / totalAttacks * 100);

    return 0;
}
