#include <stdio.h>

int main() {
    int length_in_cm;
    float length_in_m, length_in_km;

    printf("Enter the length in centimeter: ");
    scanf("%d", &length_in_cm);

    length_in_m = length_in_cm / 100.0;
    length_in_km = length_in_cm / 100000.0;

    printf("The length in meter is: %.2f\n", length_in_m);
    printf("The length in kilometer is: %.2f\n", length_in_km);

    return 0;
}