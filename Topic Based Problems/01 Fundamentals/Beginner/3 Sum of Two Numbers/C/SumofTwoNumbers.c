/**
 * @file SumofTwoNumbers.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Sum of Two Numbers in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {
    int firstNumber, secondNumber;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    printf("Sum of %d and %d is: %d\n", firstNumber, secondNumber, firstNumber + secondNumber);

    return 0;
}
