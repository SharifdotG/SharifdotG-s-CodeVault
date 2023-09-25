/**
 * @file CircleProperties.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Circle Properties in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main() {
    double radius;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    printf("Diameter of circle is: %lf\n", 2 * radius);
    printf("Circumference of circle is: %lf\n", 2 * M_PI * radius);
    printf("Area of circle is: %lf\n", M_PI * pow(radius, 2));

    return 0;
}
