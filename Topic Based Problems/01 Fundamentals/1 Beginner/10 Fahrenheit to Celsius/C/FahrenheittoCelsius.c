#include <stdio.h>

int main() {
    double fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    printf("Temperature in Celsius is: %.2lf\n", (fahrenheit - 32) * 5 / 9);

    return 0;
}
