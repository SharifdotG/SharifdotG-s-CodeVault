# CODE HINT - Read This Before You See The Code!

## Problem Description

You've been tasked with a common health-related problem: calculating the Body Mass Index (BMI) of individuals. BMI is a simple calculation based on a person's weight and height, often used to assess whether they are underweight, normal weight, overweight, or obese. It's calculated using the formula:

\[ \text{BMI} = \frac{\text{weight (kg)}}{\text{height (m)}^2} \]

Your task is to write a program that takes a person's weight in kilograms and height in meters as input and calculates their BMI.

## Example Input and Output

**Input:**  
- Weight: 70 kg
- Height: 1.75 m

**Output:**  
BMI: 22.86

**Input:**  
- Weight: 90 kg
- Height: 1.80 m

**Output:**  
BMI: 27.78

## Constraints

- Weight is a positive real number (1 <= weight <= 500).
- Height is a positive real number (0.5 <= height <= 3.0).
- Round the BMI to two decimal places.

## Understand the Problem

The problem is straightforward. You are given weight and height, and you need to calculate BMI using a specific formula. The key is to understand the formula and how to apply it correctly.

## Possible Approaches

1. **Direct Calculation**: You can directly implement the formula to calculate BMI. This is a simple and effective approach.

## Plan the Approach

Let's plan to use the direct calculation approach. We will take the weight and height as inputs and apply the BMI formula to get the result. This approach doesn't require any complex algorithms or data structures.

## Algorithm

Here's the algorithm in plain language:

1. Read the weight in kilograms (weight) and the height in meters (height) as input.
2. Calculate BMI using the formula: \[ \text{BMI} = \frac{\text{weight}}{\text{height}^2} \]
3. Round the BMI to two decimal places.
4. Print the result, indicating it's the BMI.

## Pseudocode

```plaintext
1. Read weight from input
2. Read height from input
3. Calculate BMI as weight / (height * height)
4. Round BMI to two decimal places
5. Print "BMI: " + BMI
```

## Test Cases

Test Case 1:
- Input: 
  - Weight: 70 kg
  - Height: 1.75 m
- Expected Output: BMI: 22.86

Test Case 2:
- Input: 
  - Weight: 90 kg
  - Height: 1.80 m
- Expected Output: BMI: 27.78

Test Case 3 (Edge Case - Minimum Weight and Height):
- Input: 
  - Weight: 1 kg
  - Height: 0.5 m
- Expected Output: BMI: 4.00

Test Case 4 (Edge Case - Maximum Weight and Height):
- Input: 
  - Weight: 500 kg
  - Height: 3.00 m
- Expected Output: BMI: 55.56

## Additional Guidance

Before you dive into writing the code, make sure you understand the BMI formula and how to round the result to two decimal places. Also, consider how to handle input validation (e.g., checking that weight and height are within the specified constraints).

Remember to follow good coding practices, such as using meaningful variable names and commenting your code for clarity.

**Final Remarks**

Solving this problem is a great exercise to practice basic arithmetic operations and input/output handling in programming. It's also a useful skill to have, as BMI calculations are commonly used in healthcare and fitness applications. Try to solve it on your own first, and if you have any questions or need help, feel free to refer to the GitHub profile mentioned in the introduction for sample code.