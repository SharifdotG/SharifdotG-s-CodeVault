#include <stdio.h>

int main() {
    int inter = 0, gremio = 0, draw = 0, grenais = 0;

    while (1) {
        int i, g;
        scanf("%d %d", &i, &g);

        if (i > g) inter++;
        else if (i < g) gremio++;
        else draw++;

        grenais++;

        printf("Novo grenal (1-sim 2-nao)\n");

        int option;
        scanf("%d", &option);

        if (option == 2) break;
    }

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", draw);

    if (inter > gremio) printf("Inter venceu mais\n");
    else if (inter < gremio) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");

    return 0;
}
