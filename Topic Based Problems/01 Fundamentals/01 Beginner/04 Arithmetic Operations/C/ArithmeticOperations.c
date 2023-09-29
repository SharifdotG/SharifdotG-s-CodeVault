/**
 * @file ArithmeticOperations.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Arithmetic Operations in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * Copyright (c) 2023
 */

#include <stdio.h>

int main() {
    int firstNumber, secondNumber;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    printf("Sum of %d and %d is: %d\n", firstNumber, secondNumber, firstNumber + secondNumber);
    printf("Difference of %d and %d is: %d\n", firstNumber, secondNumber, firstNumber - secondNumber);
    printf("Product of %d and %d is: %d\n", firstNumber, secondNumber, firstNumber * secondNumber);
    printf("Quotient of %d and %d is: %d\n", firstNumber, secondNumber, firstNumber / secondNumber);

    return 0;
}
