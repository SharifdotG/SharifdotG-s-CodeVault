#include <stdio.h>

int main() {
    int firstAngle, secondAngle, thirdAngle;

    printf("Enter first angle: ");
    scanf("%d", &firstAngle);

    printf("Enter second angle: ");
    scanf("%d", &secondAngle);

    thirdAngle = 180 - (firstAngle + secondAngle);

    printf("Third angle is: %d\n", thirdAngle);

    return 0;
}
