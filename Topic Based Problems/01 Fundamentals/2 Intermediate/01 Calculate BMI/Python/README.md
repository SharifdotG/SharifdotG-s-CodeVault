# Code Guide - Calculate BMI

## Introduction
This Code Guide addresses the problem of calculating Body Mass Index (BMI) based on a person's weight and height. BMI is a widely used indicator of a person's body fatness and is commonly used in healthcare and fitness assessments.

## Problem Description
The problem involves taking input from the user for their weight in kilograms and height in meters and then calculating their BMI using the formula: BMI = weight / (height * height). The result is then displayed to the user.

### Input:
- Weight in kilograms.
- Height in meters.

### Output:
- BMI value, rounded to two decimal places.

## About the Problem

### History
The concept of BMI dates back to the 19th century when Adolphe Quetelet, a Belgian mathematician, developed a formula to assess the degree of obesity in populations. It has since become a standard tool in healthcare for assessing whether an individual's weight is within a healthy range.

### Information and Trivia
- BMI is categorized into different ranges, such as underweight, normal weight, overweight, and obesity.
- The World Health Organization (WHO) defines BMI categories, but they may vary slightly between different countries and organizations.

## Approach

### Implementation
The code takes weight and height inputs from the user, applies the BMI formula, and then prints the result.

### Algorithm & Data Structures
- Input weight and height as floating-point numbers.
- Calculate BMI using the formula: `BMI = weight / (height * height)`.

## Code Walkthrough

```python
weight = float(input("Enter your weight in kilograms: "))
height = float(input("Enter your height in meters: "))

bmi = weight / (height * height)

print(f'Your BMI is {bmi:.2f}')
```

1. The code starts by taking user input for weight and height.
2. It then calculates BMI using the provided formula.
3. Finally, it prints the BMI value rounded to two decimal places.

## Complexity Analysis

### Time Complexity
The code has a constant time complexity of O(1) because it performs a fixed number of arithmetic operations regardless of the input size.

### Space Complexity
The code has a space complexity of O(1) as it only uses a few variables to store data.

### Efficiency
This code is efficient for calculating BMI as it directly applies the formula without unnecessary computations.

## Execution

The code is executed as follows:
1. User provides weight and height as input.
2. The program calculates BMI using the provided inputs.
3. The program then displays the BMI to the user.

## Examples
This code can be used in various scenarios, such as:
- Healthcare applications to assess an individual's health status.
- Fitness applications to track and monitor changes in BMI over time.

## Test Cases

### Test Case 1:
- Input:
  - Weight: 70 kg
  - Height: 1.75 m
- Expected Output:
  - Your BMI is 22.86

### Test Case 2:
- Input:
  - Weight: 90 kg
  - Height: 1.80 m
- Expected Output:
  - Your BMI is 27.78

## Troubleshooting

### Common Issues
- Input validation: Ensure that the input values for weight and height are valid (positive numbers).
- Division by zero: Make sure height is not entered as zero to avoid division errors.

### Solutions
- Add input validation checks to ensure that weight and height are valid inputs.
- Handle division by zero by checking for a height of zero before performing the BMI calculation.

## Related Resources
- [World Health Organization (WHO) BMI Categories](https://www.who.int/data/gho/indicator-metadata-registry/imr-details/2048)
- [BMI Calculator and Classification](https://www.cdc.gov/healthyweight/assessing/bmi/index.html)

## Conclusion
This Code Guide has provided a detailed explanation of how to calculate BMI using Python. It covers the problem description, approach, code walkthrough, complexity analysis, execution, examples, test cases, troubleshooting, and related resources. Calculating BMI is a fundamental task in healthcare and fitness, and this code can serve as a useful tool for such applications.

Follow the author's GitHub profile for more coding insights: [SharifdotG](https://github.com/SharifdotG).