#include <stdio.h>

int main() {
    double number, totalNumber;

    printf("Enter number: ");
    scanf("%lf", &number);

    printf("Enter total number: ");
    scanf("%lf", &totalNumber);

    printf("Percentage of %.2lf is: %.2lf%%\n", number, (number / totalNumber) * 100);

    return 0;
}
