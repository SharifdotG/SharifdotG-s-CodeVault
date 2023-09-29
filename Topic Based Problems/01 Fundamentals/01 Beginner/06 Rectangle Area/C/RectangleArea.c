/**
 * @file RectangleArea.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Rectangle Area in C
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

    printf("Area of rectangle is: %d\n", length * width);

    return 0;
}
