# Code Guide - Calculate BMI

## Introduction
This Code Guide tackles the problem of calculating BMI (Body Mass Index). BMI is a widely used formula to estimate whether a person has a healthy body weight based on their height and weight. This guide will provide a detailed walkthrough of the code that calculates BMI and explain its purpose and implementation.

## Problem Description
**Problem Statement:** Calculate the BMI of a person given their weight in kilograms and height in meters.

**Input:** 
- Weight in kilograms (a positive real number).
- Height in meters (a positive real number).

**Output:** 
- BMI value (a positive real number) rounded to two decimal places.

## About the Problem
**History:** The concept of BMI was developed by the Belgian statistician Adolphe Quetelet in the early 19th century as a simple method to assess the health status of populations. It was later adopted as a standard tool for assessing an individual's weight status.

**Information and Trivias:**
- BMI is calculated using the formula: BMI = weight (kg) / (height (m) * height (m)).
- BMI is commonly used by healthcare professionals to categorize individuals as underweight, normal weight, overweight, or obese.
- It is a simple and quick way to estimate whether a person's weight is within a healthy range, but it has limitations and doesn't take into account factors like muscle mass or body composition.

## Approach
### Implementation
The code takes input for weight and height, calculates BMI using the formula, and then prints the result.

### Algorithm & Data Structures
1. Read the weight in kilograms and height in meters from the user.
2. Calculate BMI using the formula: `BMI = weight / (height * height)`.

## Code Walkthrough
```c
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
```

1. The program starts by declaring variables `weight` and `height` to store user input.
2. It prompts the user to enter their weight in kilograms and height in meters.
3. User input is read using `scanf`.
4. BMI is calculated using the formula `weight / (height * height)`.
5. The result is printed with two decimal places using `printf`.

## Complexity Analysis
- Time Complexity: O(1) - The code has a constant time complexity as it performs a fixed number of operations regardless of the input size.
- Space Complexity: O(1) - The code uses a fixed amount of memory to store variables.

### Efficiency
The code is efficient in terms of time and space complexity. It calculates BMI in a straightforward manner without unnecessary computational overhead.

## Execution
The code is executed in the following steps:
1. The C program is compiled from source code into machine code using a C compiler (e.g., gcc).
2. The resulting executable binary file is run.
3. The program prompts the user for input, reads the input, calculates BMI, and displays the result.

## Examples
- Calculate BMI for an individual with a weight of 70 kg and a height of 1.75 meters.
- Calculate BMI for an individual with a weight of 85 kg and a height of 1.80 meters.

## Test Cases
### Test Case 1:
**Input:**
```
Enter your weight in kilogram: 70
Enter your height in meter: 1.75
```
**Output:**
```
Your BMI is 22.86
```
### Test Case 2:
**Input:**
```
Enter your weight in kilogram: 85
Enter your height in meter: 1.80
```
**Output:**
```
Your BMI is 26.23
```

### Rationale:
- Test Case 1: Weight = 70 kg, Height = 1.75 m. BMI = 70 / (1.75 * 1.75) = 22.86.
- Test Case 2: Weight = 85 kg, Height = 1.80 m. BMI = 85 / (1.80 * 1.80) = 26.23.

## Troubleshooting
**Common Issues:**
- Ensure that weight and height are entered as positive real numbers.
- Make sure there are no typos in the code.

**Solutions:**
- Check input for correctness and handle invalid input gracefully.
- Verify code syntax and variable names.

## Related Resources
- [BMI Calculator - Wikipedia](https://en.wikipedia.org/wiki/Body_mass_index)
- [BMI Classification - World Health Organization](https://www.who.int/data/gho/data/indicators/indicator-details/GHO/body-mass-index-(bmi)-classification)

## Conclusion
This Code Guide has explained the purpose and implementation of a C program that calculates BMI. Understanding BMI and how to calculate it is essential for assessing and monitoring one's health status. The provided code is a simple yet effective tool for this purpose. Feel free to explore and follow the author's GitHub profile [SharifdotG](https://github.com/SharifdotG) for more coding insights and projects.