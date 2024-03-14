#include <stdio.h>

int main() {
    double inches;

    printf("Enter the length in Inches: ");
    scanf("%lf", &inches);

    printf("Length in Centimeters = %.2lf\n", inches * 2.54);

    return 0;
}
