/**
 * @file AreaofaSquare.c
 * @brief Area of a Square in C
 * @version 1.0
 * @date 2023-09-24
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @copyright Copyright (c) 2023
 */

#include <stdio.h>
#include <math.h>

int main() {
    double side;
    
    printf("Enter the side of a Square: ");
    scanf("%lf", &side);

    printf("Area of a Square = %.2lf\n", side * side);

    return 0;
}
