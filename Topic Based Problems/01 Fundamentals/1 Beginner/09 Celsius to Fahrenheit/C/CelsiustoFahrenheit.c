#include <stdio.h>

int main() {
    double celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    printf("Temperature in Fahrenheit is: %.2lf\n", (celsius * 9 / 5) + 32);

    return 0;
}
