# Code Guide - Calculate BMI

## Introduction
This Code Guide addresses the problem of calculating Body Mass Index (BMI) using Java. BMI is a widely used measure to assess whether an individual's weight is healthy in relation to their height. This guide will provide a detailed walkthrough of the code and explain the steps involved in calculating BMI.

## Problem Description
**Problem Statement:** Calculate BMI (Body Mass Index) given a person's weight in kilograms and height in meters.

**Input:** 
- Weight in kilograms (double)
- Height in meters (double)

**Output:**
- BMI (double)

## About the Problem
### History
The concept of BMI was developed by Adolphe Quetelet in the early 19th century as a way to assess obesity in populations. It has since become a widely used tool in medicine and fitness to determine if an individual's weight falls within a healthy range for their height.

### Information and Trivia
- BMI is calculated as weight (in kilograms) divided by the square of height (in meters).
- It is a simple and quick method to assess whether a person is underweight, normal weight, overweight, or obese.
- BMI categories typically include underweight (< 18.5), normal weight (18.5 - 24.9), overweight (25 - 29.9), and obese (30 or greater).

## Approach
### Implementation
The problem is solved using a straightforward formula: BMI = weight / (height * height). We collect the weight and height from the user, perform the calculation, and display the result.

### Algorithm & Data Structures
- Algorithm: Calculate BMI = weight / (height * height)

## Code Walkthrough
```java
import java.util.Scanner;

public class CalculateBMI {
    public static void main(String[] args) {
        double weight, height;

        // Create a Scanner object to read user input
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter weight in kilograms
        System.out.print("Enter your weight in kilogram: ");
        weight = scanner.nextDouble();

        // Prompt the user to enter height in meters
        System.out.print("Enter your height in meter: ");
        height = scanner.nextDouble();

        // Calculate BMI using the formula
        double bmi = weight / (height * height);

        // Display the calculated BMI with two decimal places
        System.out.printf("Your BMI is %.2f%n", bmi);

        // Close the scanner to prevent resource leak
        scanner.close();
    }
}
```

### Complexity Analysis
- Time Complexity: The time complexity of this code is constant (O(1)) because it performs a fixed number of operations regardless of the input size.
- Space Complexity: The space complexity is also constant (O(1)) because it uses a fixed amount of memory.

### Execution
The code is executed in the following steps:
1. The program prompts the user to enter their weight and height using the `Scanner` class.
2. The user provides input values, and the program stores them in the `weight` and `height` variables.
3. The BMI is calculated using the provided formula.
4. The calculated BMI is displayed with two decimal places using `System.out.printf`.

## Examples
This code can be implemented in various scenarios, including:
- In health and fitness applications to assess a person's BMI and provide health recommendations.
- In medical software to track patient health and weight management.

## Test Cases
Here are some test cases to validate the code:
1. **Input:** Weight = 70 kg, Height = 1.75 m
   **Output:** BMI is 22.86 (Normal weight)
   
2. **Input:** Weight = 55 kg, Height = 1.60 m
   **Output:** BMI is 21.48 (Normal weight)

3. **Input:** Weight = 80 kg, Height = 1.80 m
   **Output:** BMI is 24.69 (Normal weight)

4. **Input:** Weight = 90 kg, Height = 1.65 m
   **Output:** BMI is 33.06 (Obese)

## Troubleshooting
- Ensure that the user enters valid numerical values for weight and height.
- Be cautious about units; weight should be in kilograms, and height should be in meters.
- If the output is unexpected, double-check the formula for calculating BMI.

## Related Resources
- [Body Mass Index (BMI) - Wikipedia](https://en.wikipedia.org/wiki/Body_mass_index)
- [BMI Categories - CDC](https://www.cdc.gov/healthyweight/assessing/bmi/adult_bmi/index.html)

## Conclusion
This Code Guide explained how to calculate BMI using Java. It covered the problem description, history, approach, code walkthrough, complexity analysis, execution steps, examples, test cases, troubleshooting tips, and related resources. Calculating BMI is a fundamental task in health and fitness applications, and this code provides a simple and efficient solution. For more coding resources, you can follow the GitHub profile of SharifdotG [here](https://github.com/SharifdotG).