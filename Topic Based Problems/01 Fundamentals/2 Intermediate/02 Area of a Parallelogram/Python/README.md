# Code Guide - Calculate BMI

## Introduction:
This code guide addresses the problem of calculating Body Mass Index (BMI) based on weight and height inputs. BMI is a commonly used metric to assess an individual's body weight in relation to their height. This code snippet takes user input for weight and height, calculates the BMI, and then prints the result.

## Problem Description:
- **Problem Statement**: Calculate BMI using weight (in kilograms) and height (in meters) inputs.
- **Input**: Two floating-point numbers separated by a space representing weight and height.
- **Output**: The calculated BMI as a floating-point number.

## About the Problem:
### History:
The concept of BMI was introduced by Adolphe Quetelet, a Belgian astronomer, mathematician, and sociologist, in the early 19th century. It was initially developed as a way to assess obesity levels in populations.

### Information and Trivias:
- BMI Categories:
  - Underweight: BMI < 18.5
  - Normal weight: 18.5 <= BMI < 24.9
  - Overweight: 25 <= BMI < 29.9
  - Obesity: BMI >= 30

## Approach:
### Implementation:
1. Read the weight and height inputs from the user.
2. Calculate BMI using the formula: BMI = weight / (height * height).
3. Print the calculated BMI.

### Algorithm & Data Structures:
- Algorithm: The code uses a simple mathematical formula to calculate BMI.
- Data Structures: The code uses variables to store weight and height, and arithmetic operations to calculate BMI.

## Code Walkthrough:
```python
# Read weight and height inputs from the user
weight, height = map(float, input().split())

# Calculate BMI
bmi = weight / (height * height)

# Print the calculated BMI
print(bmi)
```
- The code first reads the weight and height inputs and converts them to floating-point numbers.
- It then calculates BMI using the formula provided.
- Finally, it prints the calculated BMI.

## Complexity Analysis:
1. **Time Complexity**: The time complexity of this code is O(1) because it performs a fixed number of arithmetic operations regardless of the input size.
2. **Space Complexity**: The space complexity is O(1) as it uses a constant amount of memory to store weight, height, and the calculated BMI.
3. **Efficiency**: This solution is efficient for calculating BMI as it requires only basic arithmetic operations.

## Execution:
The code is executed as follows:
1. The Python interpreter reads and parses the source code.
2. It then converts the source code into bytecode.
3. The bytecode is executed by the Python Virtual Machine (PVM) to produce the desired output.

## Examples:
This code can be implemented in various applications, including:
- Health and fitness apps for calculating BMI.
- Medical software for assessing patients' health.
- Nutrition and weight management programs.

## Test Cases:
Here are some test cases to validate the code:
1. **Input**: 70 1.75 (weight = 70 kg, height = 1.75 m)
   - **Output**: 22.86 (Normal weight)

2. **Input**: 80 1.80 (weight = 80 kg, height = 1.80 m)
   - **Output**: 24.69 (Normal weight)

3. **Input**: 60 1.60 (weight = 60 kg, height = 1.60 m)
   - **Output**: 23.44 (Normal weight)

4. **Input**: 55 1.70 (weight = 55 kg, height = 1.70 m)
   - **Output**: 19.03 (Normal weight)

## Troubleshooting:
- Ensure that the input values are in the correct format (floating-point numbers separated by a space).
- Make sure to handle any potential division by zero errors (e.g., if height is zero).

## Related Resources:
- [Body Mass Index (BMI) - Wikipedia](https://en.wikipedia.org/wiki/Body_mass_index)
- [BMI Categories - World Health Organization](https://www.who.int/en/news-room/fact-sheets/detail/obesity-and-overweight)

## Conclusion:
This code guide has explained how to calculate BMI using weight and height inputs. It provides an overview of the problem, the history of BMI, and the approach used in the code. Test cases and troubleshooting tips have been included to ensure a better understanding of the code's functionality. You can find the code at [GitHub Profile](https://github.com/SharifdotG).