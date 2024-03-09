#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases--) {
        int bonus;
        scanf("%d", &bonus);

        int attackDabriel, defenseDabriel, levelDabriel;
        scanf("%d %d %d", &attackDabriel, &defenseDabriel, &levelDabriel);

        int attackGuarte, defenseGuarte, levelGuarte;
        scanf("%d %d %d", &attackGuarte, &defenseGuarte, &levelGuarte);

        double dabriel = (attackDabriel + defenseDabriel) / 2.0;
        if (levelDabriel % 2 == 0) {
            dabriel += bonus;
        }

        double guarte = (attackGuarte + defenseGuarte) / 2.0;
        if (levelGuarte % 2 == 0) {
            guarte += bonus;
        }

        if (dabriel > guarte) printf("Dabriel\n");
        else if (guarte > dabriel) printf("Guarte\n");
        else printf("Empate\n");
    }

    return 0;
}
