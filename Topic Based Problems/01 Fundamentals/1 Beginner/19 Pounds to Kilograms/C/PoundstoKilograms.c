#include <stdio.h>

int main() {
    double pounds;

    printf("Enter the weight in Pounds: ");
    scanf("%lf", &pounds);

    printf("Weight in Kilograms = %.2lf\n", pounds * 0.453592);

    return 0;
}
