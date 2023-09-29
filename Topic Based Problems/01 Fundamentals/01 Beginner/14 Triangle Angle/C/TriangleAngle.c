/**
 * @file TriangleAngle.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Triangle Angle in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

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
