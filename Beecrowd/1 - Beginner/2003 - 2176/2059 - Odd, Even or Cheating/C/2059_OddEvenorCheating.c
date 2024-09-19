#include <stdio.h>

int main() {
    int player1Choice, player1Numbers, player2Numbers, ifPlayer1Cheated, player1Accused;
    scanf("%d %d %d %d %d", &player1Choice, &player1Numbers, &player2Numbers, &ifPlayer1Cheated, &player1Accused);

    if (ifPlayer1Cheated == 1 && player1Accused == 1) {
        printf("Jogador 2 ganha!\n");
    } else if (ifPlayer1Cheated == 1 && player1Accused == 0) {
        printf("Jogador 1 ganha!\n");
    } else if (ifPlayer1Cheated == 0 && player1Accused == 1) {
        printf("Jogador 1 ganha!\n");
    } else {
        if (player1Choice == 1) {
            if ((player1Numbers + player2Numbers) % 2 == 0) {
                printf("Jogador 1 ganha!\n");
            } else printf("Jogador 2 ganha!\n");
        } else {
            if ((player1Numbers + player2Numbers) % 2 == 0) {
                printf("Jogador 2 ganha!\n");
            } else printf("Jogador 1 ganha!\n");
        }
    }

    return 0;
}
