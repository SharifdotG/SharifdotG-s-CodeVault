#include <stdio.h>

int main() {
    int number, total = 0, totalCoelho = 0, totalRato = 0, totalSapo = 0;
    scanf("%d", &number);

    while (number--) {
        int amount;
        char type;
        scanf("%d %c", &amount, &type);

        total += amount;

        if (type == 'C') totalCoelho += amount;
        else if (type == 'R') totalRato += amount;
        else if (type == 'S') totalSapo += amount;
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalCoelho);
    printf("Total de ratos: %d\n", totalRato);
    printf("Total de sapos: %d\n", totalSapo);
    printf("Percentual de coelhos: %.2f %%\n", (double) totalCoelho / total * 100);
    printf("Percentual de ratos: %.2f %%\n", (double) totalRato / total * 100);
    printf("Percentual de sapos: %.2f %%\n", (double) totalSapo / total * 100);

    return 0;
}
