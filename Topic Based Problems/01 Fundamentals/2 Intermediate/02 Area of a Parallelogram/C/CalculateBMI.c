/**
 * @file CalculateBMI.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Calculate BMI in C
 * @version 1.0
 * @date 2023-09-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {
    double weight, height;
    scanf("%lf %lf", &weight, &height);

    double bmi = weight / (height * height);

    printf("%lf\n", bmi);
    
    return 0;
}
