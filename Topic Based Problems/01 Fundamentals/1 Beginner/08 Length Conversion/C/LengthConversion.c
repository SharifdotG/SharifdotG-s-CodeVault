#include <stdio.h>

int main() {
    double meter;

    printf("Enter meter: ");
    scanf("%lf", &meter);

    printf("Centimeter: %.2lf\n", meter * 100);
    printf("Kilometer: %.2lf\n", meter / 1000);
    printf("Mile: %.2lf\n", meter / 1609.34);
    printf("Foot: %.2lf\n", meter * 3.28084);
    printf("Inch: %.2lf\n", meter * 39.3701);

    return 0;
}
