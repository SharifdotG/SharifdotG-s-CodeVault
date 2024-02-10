#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    printf("Power of %.2lf to the %.2lf is: %.2lf\n", base, exponent, pow(base, exponent));

    return 0;
}
