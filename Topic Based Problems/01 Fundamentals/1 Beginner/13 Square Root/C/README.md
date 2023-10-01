# Code Guide - Square Root

## Introduction
This Code Guide explores the implementation of a program to calculate the square root of a given number using C. It's a fundamental mathematical operation and a common problem in programming.

## Problem Description
1. **Problem Statement**: The problem is to find the square root of a given number.
2. **Input**: The program takes a single double-precision floating-point number as input.
3. **Output**: It returns the square root of the input number.

## About the Problem
### History
The concept of finding square roots dates back to ancient civilizations, such as the Babylonians and Egyptians, who used geometric methods. However, the formal mathematical notation and algorithms for calculating square roots were developed over time, with contributions from mathematicians like Heron of Alexandria and Al-Khwarizmi.

### Information and Trivias
- The square root of a number x is denoted as √x.
- In mathematics, the square root of a negative number is represented as an imaginary number.
- Calculating square roots plays a crucial role in various fields, including physics, engineering, and computer science.

## Approach
### Implementation
The program uses the `sqrt` function from the `math.h` library to calculate the square root of the input number.

### Algorithm & Data Structures
There is no complex algorithm or data structure involved in this simple program. It relies on the built-in mathematical function `sqrt`.

## Code Walkthrough
1. **Input**: The program prompts the user to enter a double-precision floating-point number and stores it in the variable `number`.
2. **Calculation**: It calculates the square root of the input number using the `sqrt` function.
3. **Output**: Finally, it displays the result, which is the square root of the input number.

```c
printf("Square root of %.2lf is: %.2lf\n", number, sqrt(number));
```

## Complexity Analysis
1. **Time Complexity**: The time complexity of calculating the square root using the `sqrt` function is generally very efficient and is often considered O(1) since it's a built-in operation.
2. **Space Complexity**: The space complexity is O(1) as it uses a fixed amount of memory.

## Execution
The execution of the program involves compiling the C code using a C compiler (e.g., GCC) to generate a binary executable file. This file can then be run to perform the square root calculation.

## Examples
- Calculating the square root of 25 would yield a result of 5.00.
- For an input of 2.5, the program would output the square root as 1.58.

## Test Cases
Test Case 1:
- Input: 16.0
- Output: Square root of 16.00 is: 4.00

Test Case 2:
- Input: 9.0
- Output: Square root of 9.00 is: 3.00

Test Case 3:
- Input: 2.0
- Output: Square root of 2.00 is: 1.41

## Troubleshooting
Common issues users might encounter include:
- Providing invalid input (e.g., a negative number): The code does not handle negative numbers, and the result would be NaN (Not-a-Number).
- Compiling errors: Ensure that you have a C compiler installed and properly configured.

## Related Resources
- [math.h documentation](https://en.cppreference.com/w/c/numeric/math)
- [Wikipedia: Square root](https://en.wikipedia.org/wiki/Square_root)

## Conclusion
This Code Guide has explored a simple C program that calculates the square root of a given number. It's a fundamental operation that showcases the use of built-in math functions. Feel free to follow the author's GitHub profile for more coding insights: [SharifdotG](https://github.com/SharifdotG).