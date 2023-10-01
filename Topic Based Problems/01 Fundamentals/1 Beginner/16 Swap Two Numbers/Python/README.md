# Code Guide - Swap Two Numbers

## Introduction:
This Code Guide addresses the common programming task of swapping two numbers in various ways. Swapping two numbers involves exchanging the values stored in two variables. We will explore three different approaches to achieve this: using arithmetic operations, a temporary variable, and a simple Pythonic swap syntax.

## Problem Description:
Swapping two numbers involves taking the values of two variables and interchanging them. The input consists of two integers representing the numbers to be swapped. The goal is to have the first number store the value of the second number and vice versa after the swapping operation.

## About the Problem:
### History:
Swapping two numbers is a fundamental operation in computer science and programming. It has been used extensively in various algorithms and applications. This problem has practical applications in sorting algorithms, data manipulation, and more.

### Information and Trivias:
- Swapping is a constant-time operation, meaning it takes the same amount of time regardless of the size of the numbers.
- Swapping is also commonly used to reorder elements in an array or list.
- The problem is straightforward but has numerous creative solutions.

## Approach:
### Implementation:
We will implement three different approaches to swapping two numbers: using arithmetic operations, a temporary variable, and Pythonic swap syntax. Each approach has its advantages and use cases.

### Algorithm & Data Structures:
No complex algorithms or data structures are required for this problem. Basic arithmetic operations and variable manipulation are used.

## Code Walkthrough:
### Arithmetic Operation:
- We take user input for two numbers, `firstNumber` and `secondNumber`.
- We print the numbers before swapping.
- To swap them, we use three arithmetic operations:
  1. `firstNumber = firstNumber + secondNumber` adds the values of both numbers and stores the result in `firstNumber`.
  2. `secondNumber = firstNumber - secondNumber` subtracts the original `secondNumber` from the updated `firstNumber` to store it in `secondNumber`.
  3. `firstNumber = firstNumber - secondNumber` subtracts the updated `secondNumber` from the updated `firstNumber` to store it in `firstNumber`.
- Finally, we print the numbers after swapping.

### Temporary Variable:
- We take user input for two numbers, `firstNumber` and `secondNumber`.
- We print the numbers before swapping.
- We use a temporary variable `temp` to hold the value of `firstNumber`.
- We assign the value of `secondNumber` to `firstNumber`.
- We assign the value of `temp` (which holds the original `firstNumber`) to `secondNumber`.
- Finally, we print the numbers after swapping.

### Swap Syntax:
- We take user input for two numbers, `first_number` and `second_number`.
- We print the numbers before swapping.
- We use a single line of code to swap the numbers using Pythonic swap syntax: `first_number, second_number = second_number, first_number`.
- Finally, we print the numbers after swapping.

## Complexity Analysis:
### Time Complexity:
- The time complexity of all three approaches is O(1), meaning the time it takes to swap two numbers is constant and not dependent on the size of the numbers.

### Space Complexity:
- The space complexity of all three approaches is O(1) because they do not require additional data structures that grow with the input size.

### Efficiency:
- All three approaches are efficient for swapping two numbers. However, the Pythonic swap syntax is the most concise and readable.

## Execution:
- Execution of the code involves the following steps:
  1. User input for two numbers.
  2. Performing the swapping operation using one of the three approaches.
  3. Displaying the numbers before and after swapping.

## Examples:
- Swapping two numbers is a common task in various applications. For example, it can be used in sorting algorithms like bubble sort and in situations where variable values need to be exchanged.

## Test Cases:
1. Input: `firstNumber = 5`, `secondNumber = 10`
   Output: 
   ```
   Before swapping:
   First number: 5
   Second number: 10
   After swapping:
   First number: 10
   Second number: 5
   ```

2. Input: `firstNumber = -3`, `secondNumber = 7`
   Output:
   ```
   Before swapping:
   First number: -3
   Second number: 7
   After swapping:
   First number: 7
   Second number: -3
   ```

3. Input: `first_number = 100`, `second_number = 100`
   Output:
   ```
   Before swapping:
   First number: 100
   Second number: 100
   After swapping:
   First number: 100
   Second number: 100
   ```

## Troubleshooting:
- Common issues may include:
  - Incorrect input data types (not integers).
  - Division by zero if arithmetic operations are used (e.g., division instead of subtraction).

## Related Resources:
- [Python Official Documentation](https://docs.python.org/3/)
- [GeeksforGeeks: Swap two numbers without using a temporary variable](https://www.geeksforgeeks.org/swap-two-numbers-without-using-temporary-variable/)

## Conclusion:
Swapping two numbers is a fundamental programming task with various solutions. We've explored three different approaches: using arithmetic operations, a temporary variable, and Pythonic swap syntax. Each approach has its advantages and can be used depending on the specific requirements of a program. Swapping is a simple yet powerful concept that finds applications in a wide range of programming tasks. Follow [SharifdotG's GitHub Profile](https://github.com/SharifdotG) for more coding insights and examples.