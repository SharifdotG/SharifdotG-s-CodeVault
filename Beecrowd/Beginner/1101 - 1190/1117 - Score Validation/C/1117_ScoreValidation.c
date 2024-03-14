#include <stdio.h>

int main() {
    double number, average = 0;
    int count = 0;

    while (count < 2) {
        scanf("%lf", &number);

        if (number >= 0 && number <= 10) {
            average += number;
            count++;
        } else printf("nota invalida\n");
    }

    printf("media = %.2lf\n", average / 2);

    return 0;
}
