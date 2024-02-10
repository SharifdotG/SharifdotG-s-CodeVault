# Code Guide - Circle Properties

## Introduction
This Code Guide explains how to calculate various properties of a circle using Python. We will cover the problem statement, provide insights into the approach, break down the code, analyze its complexity, and offer examples and test cases for better understanding.

## Problem Description
The problem is to calculate and display the diameter, circumference, and area of a circle based on its radius.

**Input:**
- User inputs the radius of the circle.

**Output:**
- The program calculates and displays:
  - Diameter of the circle
  - Circumference of the circle
  - Area of the circle

## About the Problem

**History:**
- The problem of calculating circle properties has practical applications in geometry, physics, engineering, and computer graphics.
- Ancient civilizations like the Egyptians and Greeks studied circles for their architectural and mathematical significance.

**Information and Trivia:**
- The mathematical constant π (pi) is closely associated with circles and is approximately 3.14159.
- The concept of π dates back to ancient civilizations, and its precise value has been calculated to trillions of decimal places.

## Approach

**Implementation:**
- Read the radius input from the user.
- Use mathematical formulas to calculate the diameter, circumference, and area.
- Display the results.

**Algorithm & Data Structures:**
- No complex algorithms or data structures are used; this problem is solved using basic arithmetic operations and the math library.

## Code Walkthrough

```python
import math

radius = float(input("Enter radius: "))
print("Diameter of circle is:", 2 * radius)
print("Circumference of circle is:", 2 * math.pi * radius)
print("Area of circle is:", math.pi * radius ** 2)
```

1. We import the `math` library to access mathematical functions, including π.
2. The user inputs the radius, which is stored as a floating-point number.
3. The diameter is calculated by doubling the radius.
4. The circumference is calculated using the formula 2πr.
5. The area is calculated using the formula πr².
6. The results are displayed.

## Complexity Analysis

**Time Complexity:**
- The time complexity of this code is O(1), meaning it runs in constant time since the calculations involve basic arithmetic operations.

**Space Complexity:**
- The space complexity is also O(1) as it doesn't use additional memory that scales with the input.

**Efficiency:**
- This solution is highly efficient and suitable for real-time calculations.

## Execution

The code is executed as follows:
1. The Python source code is compiled into bytecode.
2. The Python interpreter runs the bytecode, executing each line sequentially.
3. Input is received from the user when prompted.
4. Calculations are performed.
5. Results are displayed on the console.

## Examples

This code can be used in various scenarios, such as:
- Calculating the dimensions of circular objects like wheels and gears.
- In geometry classes to teach circle properties.
- In computer graphics for drawing and rendering circles.

## Test Cases

Here are some test cases to validate the code:

**Test Case 1:**
- Input: Radius = 5.0
- Expected Output:
  - Diameter of circle is: 10.0
  - Circumference of circle is: 31.41592653589793
  - Area of circle is: 78.53981633974483

**Test Case 2:**
- Input: Radius = 1.5
- Expected Output:
  - Diameter of circle is: 3.0
  - Circumference of circle is: 9.42477796076938
  - Area of circle is: 7.0685834705770345

**Test Case 3:**
- Input: Radius = 0
- Expected Output:
  - Diameter of circle is: 0.0
  - Circumference of circle is: 0.0
  - Area of circle is: 0.0

## Troubleshooting

**Common Issues:**
- Entering non-numeric values as radius can cause a `ValueError`.
- Make sure you have imported the `math` library correctly.

**Solutions:**
- Handle exceptions to ensure the input is numeric.
- Verify the `import math` statement is present.

## Related Resources

- [Math Library Documentation](https://docs.python.org/3/library/math.html)
- [Wikipedia - Circle](https://en.wikipedia.org/wiki/Circle)
- [Pi Approximations](https://en.wikipedia.org/wiki/Approximations_of_%CF%80)

## Conclusion

This Code Guide has explained how to calculate and display the properties of a circle, including its diameter, circumference, and area. Understanding the code's approach, complexity, and usage can be beneficial in various mathematical and real-world applications. For more coding and problem-solving insights, follow [SharifdotG's GitHub Profile](https://github.com/SharifdotG).