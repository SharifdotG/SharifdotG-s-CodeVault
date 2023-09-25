/**
 * @file SwapTwoNumbersUsingTemp.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Swap Two Numbers in C using Temp Variable
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {
    int firstNumber, secondNumber, temp;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    printf("Before swapping: \n");
    printf("First number: %d\n", firstNumber);
    printf("Second number: %d\n", secondNumber);

    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    printf("After swapping: \n");
    printf("First number: %d\n", firstNumber);
    printf("Second number: %d\n", secondNumber);

    return 0;
}
