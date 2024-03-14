#include <stdio.h>
#include <string.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    for (int i = 0; i < testCases; i++) {
        char player1[10], player2[10];
        scanf("%s %s", player1, player2);

        if (strcmp(player1, "ataque") == 0 && strcmp(player2, "pedra") == 0)
            printf("Jogador 1 venceu\n");
        else if (strcmp(player1, "pedra") == 0 && strcmp(player2, "ataque") == 0)
            printf("Jogador 2 venceu\n");
        else if (strcmp(player1, "pedra") == 0 && strcmp(player2, "papel") == 0)
            printf("Jogador 1 venceu\n");
        else if (strcmp(player1, "papel") == 0 && strcmp(player2, "pedra") == 0)
            printf("Jogador 2 venceu\n");
        else if (strcmp(player1, "papel") == 0 && strcmp(player2, "ataque") == 0)
            printf("Jogador 2 venceu\n");
        else if (strcmp(player1, "ataque") == 0 && strcmp(player2, "papel") == 0)
            printf("Jogador 1 venceu\n");
        else if (strcmp(player1, "papel") == 0 && strcmp(player2, "papel") == 0)
            printf("Ambos venceram\n");
        else if (strcmp(player1, "pedra") == 0 && strcmp(player2, "pedra") == 0)
            printf("Sem ganhador\n");
        else if (strcmp(player1, "ataque") == 0 && strcmp(player2, "ataque") == 0)
            printf("Aniquilacao mutua\n");
    }

    return 0;
}
