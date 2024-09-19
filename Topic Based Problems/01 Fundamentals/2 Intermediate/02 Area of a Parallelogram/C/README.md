# Code Guide - Calculate BMI

## Introduction
This Code Guide will walk you through the implementation of a C program that calculates Body Mass Index (BMI). BMI is a simple yet important metric used to assess an individual's weight relative to their height. This program takes user input for weight and height and computes the BMI, providing a valuable tool for health assessment.

## Problem Description
- **Problem Statement**: Calculate BMI given weight (in kilograms) and height (in meters).
- **Input**: Two real numbers, weight (in kilograms) and height (in meters).
- **Output**: The calculated BMI as a real number.

## About the Problem
### History
- BMI was developed by the Belgian statistician Adolphe Quetelet in the early 19th century.
- It gained widespread use in the mid-20th century as a simple tool for assessing body composition and health.

### Information and Trivia
- BMI is calculated using the formula: BMI = weight (kg) / (height^2 (m^2)).
- It is widely used in the medical field to assess whether an individual is underweight, normal weight, overweight, or obese.
- BMI has limitations and doesn't take into account factors like muscle mass, age, and sex.

## Approach
### Implementation
1. Initialize two variables, `weight` and `height`, to store user input.
2. Read user input for weight and height using `scanf`.
3. Calculate BMI using the formula: `bmi = weight / (height * height)`.
4. Print the calculated BMI.

### Algorithm & Data Structures
- No complex algorithms or data structures are needed for this simple calculation.

## Code Walkthrough
```c
#include <stdio.h>

int main() {
    double weight, height;
    scanf("%lf %lf", &weight, &height);

    double bmi = weight / (height * height);

    printf("%lf\n", bmi);
    
    return 0;
}
```

1. We include the standard input-output library, `<stdio.h>`.
2. In the `main` function, we declare two variables, `weight` and `height`, to store user input as real numbers.
3. We use `scanf` to read user input for weight and height, formatting it as two space-separated real numbers.
4. Calculate BMI by dividing `weight` by the square of `height`.
5. Print the calculated BMI.

## Complexity Analysis
### Time Complexity
- The time complexity of this code is O(1), as it performs a fixed number of operations regardless of the input size.

### Space Complexity
- The space complexity is O(1), as it only uses a constant amount of memory to store variables.

### Efficiency
- This code is highly efficient for calculating BMI, as it involves simple arithmetic operations and minimal memory usage.

## Execution
- The code is compiled and executed on a C compiler, which translates the source code into binary code that the computer can execute.

## Examples
- You can use this code in various applications, such as health and fitness apps, medical software, or anywhere BMI calculations are needed.

## Test Cases
### Test Case 1:
- **Input**: `70.5 1.75`
- **Output**: `23.020408`
- **Explanation**: A person with a weight of 70.5 kg and a height of 1.75 m has a BMI of approximately 23.02.

### Test Case 2:
- **Input**: `85 1.80`
- **Output**: `26.234568`
- **Explanation**: For a person weighing 85 kg and having a height of 1.80 m, the BMI is roughly 26.23.

## Troubleshooting
- Common issues may include:
  - Entering non-numeric values for weight and height.
  - Using incorrect units (e.g., pounds instead of kilograms).
- To handle these issues, you can add input validation and unit conversion code.

## Related Resources
- [BMI Calculator - Wikipedia](https://en.wikipedia.org/wiki/Body_mass_index)
- [CDC - About BMI](https://www.cdc.gov/healthyweight/assessing/bmi/index.html)

## Conclusion
This C program provides a simple and efficient solution to calculate BMI based on user input for weight and height. Understanding BMI is crucial for assessing one's health and fitness level. Feel free to explore the code further and adapt it to your specific application. For more code and projects, you can follow the author's GitHub profile: [SharifdotG](https://github.com/SharifdotG).