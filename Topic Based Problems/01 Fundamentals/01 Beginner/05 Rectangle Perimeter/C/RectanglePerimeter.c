/**
 * @file RectanglePerimeter.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Rectangle Perimeter in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {
    int length, width;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    printf("Perimeter of rectangle is: %d\n", 2 * (length + width));

    return 0;
}
