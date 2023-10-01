/**
 * @file CalculateBMI.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Calculate BMI in C
 * @version 1.0
 * @date 2023-09-23
 * 
 * This program calculates the Body Mass Index (BMI) based on user input.
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {
    double weight, height;
    
    printf("Enter your weight in kilogram: ");
    scanf("%lf", &weight);

    printf("Enter your height in meter: ");
    scanf("%lf", &height);

    double bmi = weight / (height * height);

    printf("Your BMI is %.2f\n", bmi);
    
    return 0;
}
