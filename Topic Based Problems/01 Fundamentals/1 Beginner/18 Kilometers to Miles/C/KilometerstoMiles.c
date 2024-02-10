#include <stdio.h>

int main() {
    double kilometers;

    printf("Enter the distance in Kilometers: ");
    scanf("%lf", &kilometers);

    printf("Distance in Miles = %.2lf\n", kilometers * 0.621371);

    return 0;
}
