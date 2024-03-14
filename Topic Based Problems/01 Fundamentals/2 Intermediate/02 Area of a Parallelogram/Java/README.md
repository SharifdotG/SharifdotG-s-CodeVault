# Code Guide - Calculate BMI

## Introduction
This Code Guide explains how to calculate Body Mass Index (BMI) using Java. BMI is a common metric for assessing an individual's body weight relative to their height. This guide will provide a detailed step-by-step breakdown of the Java code presented, helping you understand how to implement a BMI calculator.

## Problem Description
The problem at hand is to calculate the BMI of an individual given their weight in kilograms and height in meters. The BMI is calculated using the formula: BMI = weight / (height * height).

### Input
- Weight in kilograms (double)
- Height in meters (double)

### Output
- BMI value (double)

## About the Problem
### History
BMI was introduced by the Belgian statistician and sociologist Adolphe Quetelet in the 19th century as the Quetelet Index. It was later renamed the Body Mass Index and has since become a widely used tool to assess an individual's health based on their weight and height.

### Information and Trivia
- BMI is categorized into different ranges to assess an individual's weight status, such as underweight, normal weight, overweight, and obese.
- The World Health Organization (WHO) provides standard BMI categories.

## Approach
### Implementation
The problem is solved by taking the user's weight and height as input, applying the BMI formula, and then displaying the result.

### Algorithm & Data Structures
No specific algorithm or data structure is required for this simple calculation. It's a straightforward mathematical operation.

## Code Walkthrough
The code is divided into the following sections:

1. **Importing Libraries**: Importing the `Scanner` class to read input from the user.

2. **Main Method**: The program starts execution here. It initializes a `Scanner` object for user input and then reads the weight and height as doubles.

3. **BMI Calculation**: The BMI is calculated using the formula `weight / (height * height)`.

4. **Printing the Result**: The calculated BMI is printed to the console.

5. **Closing the Scanner**: The `Scanner` object is closed to release resources.

## Complexity Analysis
### Time Complexity
The time complexity of this code is O(1) because it involves simple arithmetic operations that execute in constant time.

### Space Complexity
The space complexity is also O(1) as it does not use any data structures that grow with input size.

### Efficiency
The code is efficient for calculating BMI as it performs the calculation in a single step without any unnecessary overhead.

## Execution
The code is executed in the following steps:
1. Compile the Java source code using a Java compiler, which produces bytecode.
2. Execute the Java bytecode using the Java Virtual Machine (JVM), which produces the desired output on the console.

## Examples
This code can be implemented in various scenarios, including:
- Healthcare applications for assessing patient health.
- Fitness and wellness apps for tracking BMI.
- Medical research studies involving body weight analysis.

## Test Cases
Here are some test cases to validate the code:

1. **Input**: 
   - Weight: 70 kg
   - Height: 1.75 m
   - **Expected Output**: 22.86

2. **Input**: 
   - Weight: 85 kg
   - Height: 1.80 m
   - **Expected Output**: 26.23

3. **Input**: 
   - Weight: 60 kg
   - Height: 1.60 m
   - **Expected Output**: 23.44

### Rationale
These test cases cover a range of weights and heights to ensure the code calculates BMI correctly.

## Troubleshooting
Common issues might include:
- Entering non-numeric values for weight and height, which would result in runtime errors. Ensure valid inputs are provided.

## Related Resources
- [BMI on Wikipedia](https://en.wikipedia.org/wiki/Body_mass_index)
- [World Health Organization (WHO) BMI Categories](https://www.who.int/news-room/fact-sheets/detail/obesity-and-overweight)

## Conclusion
This Code Guide has explained how to calculate BMI using Java, providing a step-by-step breakdown of the code and offering insights into the history and importance of BMI. It's a simple yet valuable tool for assessing an individual's health status based on their weight and height. You can find the code on GitHub at [SharifdotG](https://github.com/SharifdotG). Enjoy coding and stay healthy!