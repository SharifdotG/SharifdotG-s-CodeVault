#include <stdio.h>

int main() {
    double number, average, sum = 0;
    int count = 0, option;

    while (count < 2) {
        scanf("%lf", &number);

        if (number >= 0 && number <= 10) {
            sum += number;
            count++;
        } else printf("nota invalida\n");
    }

    average = sum / 2;

    printf("media = %.2lf\n", average);

    while (1) {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &option);

        if (option == 1) {
            sum = 0;
            count = 0;

            while (count < 2) {
                scanf("%lf", &number);

                if (number >= 0 && number <= 10) {
                    sum += number;
                    count++;
                } else printf("nota invalida\n");
            }

            average = sum / 2;

            printf("media = %.2lf\n", average);
        } else if (option == 2) break;
    }

    return 0;
}
