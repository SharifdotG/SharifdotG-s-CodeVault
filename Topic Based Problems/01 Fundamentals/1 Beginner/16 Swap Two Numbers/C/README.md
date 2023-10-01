# Code Guide - Swap Two Numbers

## Introduction
This Code Guide addresses the problem of swapping two numbers in programming. Swapping two numbers is a fundamental operation often used in various algorithms and programs. It involves exchanging the values of two variables without using a temporary variable. We will explore two common methods to accomplish this task: using arithmetic operations and using a temporary variable.

## Problem Description
- **Problem Statement:** Given two integers, we need to swap their values.
- **Input:** Two integers, `firstNumber` and `secondNumber`.
- **Output:** The values of `firstNumber` and `secondNumber` after swapping.

## About the Problem
### History
Swapping two numbers is a basic operation in computer programming and has been used since the early days of computing. It is an essential element in various algorithms and is employed in everyday programming tasks.

### Information and Trivia
- Swapping is often used to sort arrays and perform various mathematical calculations.
- It is a fundamental concept in low-level programming, as it helps optimize memory usage.

## Approach
### Implementation
We will explore two approaches to swap two numbers: one using arithmetic operations and the other using a temporary variable.

### Algorithm & Data Structures
No specific algorithm or data structures are used in this problem. The key is to manipulate the values of variables to achieve the swap.

## Code Walkthrough
### Arithmetic Operation
1. We start by reading two integers, `firstNumber` and `secondNumber`, from the user.
2. The initial values of the variables are displayed to the user.
3. To swap the numbers, we use three arithmetic operations:
   - `firstNumber` is updated to `firstNumber + secondNumber`, effectively storing the sum of the two numbers.
   - `secondNumber` is updated to `firstNumber - secondNumber`, which subtracts the original value of `secondNumber` from the sum, effectively storing the original value of `firstNumber`.
   - Finally, `firstNumber` is updated to `firstNumber - secondNumber`, which subtracts the new value of `secondNumber` (original `firstNumber`) from the sum, effectively storing the original value of `secondNumber`.
4. The values of `firstNumber` and `secondNumber` after swapping are displayed.

### Temporary Variable
1. This code follows the same logic as the arithmetic operation method but uses a temporary variable `temp` to facilitate the swap.
2. The temporary variable `temp` is used to store the value of `firstNumber`.
3. The value of `firstNumber` is then updated to `secondNumber`, and `secondNumber` is set to the value stored in `temp`.
4. The values of `firstNumber` and `secondNumber` after swapping are displayed.

## Complexity Analysis
### Time Complexity
Both approaches have a time complexity of O(1) because they involve a fixed number of arithmetic operations and assignments, regardless of the size of the input.

### Space Complexity
The space complexity of both approaches is also O(1) because they only use a constant amount of memory to store variables.

### Efficiency
Both methods are efficient for swapping two numbers, and there is no significant performance difference between them. However, the arithmetic operation method avoids the use of an extra variable, which may be preferable in some scenarios.

## Execution
The code is executed sequentially, following the order of statements in the main function. It reads input, performs the swap, and displays the results to the user.

## Examples
Swapping two numbers can be used in various scenarios, such as sorting algorithms, mathematical calculations, and value exchanges in programming.

## Test Cases
### Test Case 1
- **Input:** 
  - `firstNumber = 5`
  - `secondNumber = 10`
- **Expected Output:**
  - After swapping:
    - `firstNumber = 10`
    - `secondNumber = 5`

### Test Case 2
- **Input:** 
  - `firstNumber = -3`
  - `secondNumber = 7`
- **Expected Output:**
  - After swapping:
    - `firstNumber = 7`
    - `secondNumber = -3`

### Test Case 3
- **Input:** 
  - `firstNumber = 0`
  - `secondNumber = 0`
- **Expected Output:**
  - After swapping:
    - `firstNumber = 0`
    - `secondNumber = 0`

## Troubleshooting
- Ensure that you have entered integer values as input.
- Check for any syntax errors in the code.
- If using the arithmetic operation method, be cautious of potential overflow if the input numbers are very large.

## Related Resources
- [GitHub Profile: SharifdotG](https://github.com/SharifdotG)

## Conclusion
Swapping two numbers is a fundamental operation in programming, and this Code Guide has provided two common methods to achieve it. Whether using arithmetic operations or a temporary variable, the goal is to exchange values efficiently. Understanding these techniques is essential for any programmer, as they are frequently used in a wide range of programming tasks. Explore the provided code examples and test cases to deepen your understanding of this fundamental concept.