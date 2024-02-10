#include <stdio.h>
#include <math.h>

int main() {
    double number;

    printf("Enter number: ");
    scanf("%lf", &number);

    printf("Square root of %.2lf is: %.2lf\n", number, sqrt(number));

    return 0;
}
