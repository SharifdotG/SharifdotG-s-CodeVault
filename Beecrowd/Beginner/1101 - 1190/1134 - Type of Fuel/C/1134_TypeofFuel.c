#include <stdio.h>

int main() {
    int alcohol = 0, gasoline = 0, diesel = 0;

    while (1) {
        int code;
        scanf("%d", &code);

        if (code == 1) alcohol++;
        else if (code == 2) gasoline++;
        else if (code == 3) diesel++;
        else if (code == 4) break;
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);

    return 0;
}
