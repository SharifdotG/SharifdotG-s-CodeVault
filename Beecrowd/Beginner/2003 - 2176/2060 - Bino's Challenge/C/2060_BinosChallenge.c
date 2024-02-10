#include <stdio.h>

int main() {
    int numbersInList;
    scanf("%d", &numbersInList);

    int multiplesOf2 = 0, multiplesOf3 = 0, multiplesOf4 = 0, multiplesOf5 = 0;

    while (numbersInList--) {
        int number;
        scanf("%d", &number);

        if (number % 2 == 0) multiplesOf2++;
        if (number % 3 == 0) multiplesOf3++;
        if (number % 4 == 0) multiplesOf4++;
        if (number % 5 == 0) multiplesOf5++;
    }

    printf("%d Multiplo(s) de 2\n", multiplesOf2);
    printf("%d Multiplo(s) de 3\n", multiplesOf3);
    printf("%d Multiplo(s) de 4\n", multiplesOf4);
    printf("%d Multiplo(s) de 5\n", multiplesOf5);

    return 0;
}
