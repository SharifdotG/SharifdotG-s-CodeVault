# Code Guide - Triangle Angle

## Introduction

This Code Guide explores the solution to the problem of finding the third angle of a triangle given two of its angles. The problem is a simple mathematical one, where we use the fact that the sum of all angles in a triangle is always 180 degrees to find the missing angle.

## Problem Description

In this problem, we are given two angles of a triangle, and we need to find the measure of the third angle. The problem can be described as follows:

- **Input**: Two angles of a triangle (integer values).
- **Output**: The measure of the third angle (integer value).

## About the Problem

### History

The concept of finding angles in a triangle has been a fundamental part of geometry for centuries. It has applications in various fields, including architecture, engineering, and physics. Triangles are one of the simplest and most important geometric shapes, and understanding their properties is essential in mathematics.

### Information and Trivias

Here is a quick table showing the sum of angles in different types of triangles:

| Type of Triangle   | Sum of Angles |
|---------------------|---------------|
| Equilateral         | 180°          |
| Isosceles           | 180°          |
| Scalene             | 180°          |
| Right Triangle      | 180°          |
| Acute Triangle      | 180°          |
| Obtuse Triangle     | 180°          |

## Approach

### Implementation

To solve this problem, we utilize the fact that the sum of all angles in a triangle is always 180 degrees. Therefore, to find the third angle, we subtract the sum of the given two angles from 180. This simple approach is implemented in the code.

### Algorithm & Data Structures

No complex algorithms or data structures are required for this problem. We perform a straightforward arithmetic operation to find the third angle.

## Code Walkthrough

Let's break down the code into logical sections:

```cpp
#include <iostream>
using namespace std;

int main() {
    int firstAngle, secondAngle, thirdAngle;

    // Input the first angle
    cout << "Enter first angle: ";
    cin >> firstAngle;

    // Input the second angle
    cout << "Enter second angle: ";
    cin >> secondAngle;

    // Calculate the third angle
    thirdAngle = 180 - (firstAngle + secondAngle);

    // Output the result
    cout << "Third angle is: " << thirdAngle << endl;

    return 0;
}
```

1. We start by including the necessary header files and defining the namespace.

2. We declare three integer variables: `firstAngle`, `secondAngle`, and `thirdAngle` to store the input angles and the calculated third angle.

3. We prompt the user to input the first angle and store it in `firstAngle`.

4. Similarly, we prompt the user to input the second angle and store it in `secondAngle`.

5. We calculate the third angle by subtracting the sum of `firstAngle` and `secondAngle` from 180 and store the result in `thirdAngle`.

6. Finally, we output the value of `thirdAngle`.

## Complexity Analysis

### Time Complexity

The time complexity of this code is O(1) because it performs a fixed number of arithmetic operations, regardless of the input values.

### Space Complexity

The space complexity is O(1) as well since it uses a constant amount of memory to store the input and output variables.

### Efficiency

The code is efficient for this specific problem. There are no significant areas for improvement, as the problem's complexity is inherently simple.

## Execution

The code execution process involves compiling the source code into binary code and running it. It follows the standard steps of compilation and execution for C++ programs.

## Examples

This code can be used in various situations where you need to find the missing angle of a triangle. For example, in surveying and construction, knowing the angles of triangles is essential for precise measurements and layout planning.

## Test Cases

Here are some test cases to validate the code:

**Test Case 1:**

- Input:
  ```
  Enter first angle: 45
  Enter second angle: 60
  ```
- Output:
  ```
  Third angle is: 75
  ```

**Test Case 2:**

- Input:
  ```
  Enter first angle: 90
  Enter second angle: 45
  ```
- Output:
  ```
  Third angle is: 45
  ```

**Test Case 3:**

- Input:
  ```
  Enter first angle: 30
  Enter second angle: 30
  ```
- Output:
  ```
  Third angle is: 120
  ```

## Troubleshooting

Common issues that may arise while using this code include:

1. **Invalid Input**: If the user enters non-integer values or values outside the range of valid angles (0 to 180 degrees), the code may produce unexpected results.

2. **Logic Error**: If there is a logic error in the code, such as incorrect formulae or calculations, the output will be incorrect.

To troubleshoot these issues, ensure that the input values are within the valid range and double-check the arithmetic calculations in the code.

## Related Resources

- [Geometry and Trigonometry in Real Life](https://www.thoughtco.com/examples-of-geometry-and-trigonometry-in-everyday-life-45359)
- [C++ Reference](https://en.cppreference.com/)

## Conclusion

This Code Guide has provided a detailed explanation of how to solve the problem of finding the third angle of a triangle using C++. The code is straightforward and efficient for its purpose. Understanding the properties of triangles and their angles is fundamental in mathematics and various practical applications. Feel free to explore and modify the code to suit your specific needs.

For more coding resources and examples, you can follow [SharifdotG's GitHub Profile](https://github.com/SharifdotG). Happy coding!