# Code Guide - Swap Two Numbers

## Introduction

This Code Guide explores two Java programs, "SwapTwoNumbers" and "SwapTwoNumbersUsingTemp," designed to solve the problem of swapping the values of two variables. Swapping two numbers is a fundamental programming task that involves exchanging the values of two variables. This guide will provide detailed insights into how this task can be accomplished using two different approaches.

## Problem Description

The problem at hand is to take two integers as input and swap their values. The input consists of two integers, and the expected output is the same integers with their values swapped.

## About the Problem

### History

The need to swap two numbers arises in various programming scenarios, such as sorting algorithms and user interface design. It is a fundamental operation in computer science and programming.

### Information and Trivia

- Swapping two numbers is often taught to beginners as a way to illustrate the importance of variables.
- The problem can be solved in multiple ways, including using arithmetic operations and a temporary variable.

## Approach

### Implementation

**Arithmetic Operation Approach:**
- Take two integers as input.
- Use arithmetic operations to swap the values without using a temporary variable.

**Temporary Variable Approach:**
- Take two integers as input.
- Use a temporary variable to store one of the values.
- Assign the value of the first variable to the second variable and vice versa using the temporary variable.

### Algorithm & Data Structures

No specific algorithm or data structure is required for this problem. It relies on basic arithmetic operations and variable assignments.

## Code Walkthrough

### Arithmetic Operation Approach

1. **Input**: Accept two integers from the user.

2. **Before Swapping**: Print the values of the two integers before swapping.

3. **Swapping**:
   - Add the first number to the second number and store it in the first number. (`firstNumber = firstNumber + secondNumber`)
   - Subtract the second number from the first number and store it in the second number. (`secondNumber = firstNumber - secondNumber`)
   - Subtract the new second number from the updated first number to complete the swap. (`firstNumber = firstNumber - secondNumber`)

4. **After Swapping**: Print the values of the two integers after swapping.

### Temporary Variable Approach

1. **Input**: Accept two integers from the user.

2. **Before Swapping**: Print the values of the two integers before swapping.

3. **Swapping**:
   - Use a temporary variable `temp` to store the value of the first number.
   - Assign the value of the second number to the first number (`firstNumber = secondNumber`).
   - Assign the value stored in the temporary variable to the second number (`secondNumber = temp`).

4. **After Swapping**: Print the values of the two integers after swapping.

## Complexity Analysis

### Time Complexity

Both approaches have a time complexity of O(1) because the number of operations performed is constant and not dependent on the size of the input.

### Space Complexity

Both approaches have a space complexity of O(1) because they only use a constant amount of additional memory (the temporary variable in the second approach).

### Efficiency

The temporary variable approach is slightly more efficient in terms of readability and maintainability, while the arithmetic operation approach saves memory by not using an additional variable.

## Execution

The Java code is executed by first compiling it into bytecode using the Java compiler (`javac`). Then, the Java Virtual Machine (JVM) executes the bytecode, producing the desired output. The user interacts with the program through the command line.

## Examples

This problem can be applied in various real-life scenarios, such as:
- Swapping the values of two variables in a sorting algorithm.
- Exchanging the positions of elements in an array or list.
- Reordering elements in a user interface.

## Test Cases

Test Case 1:
- Input: First number = 5, Second number = 7
- Expected Output (Arithmetic Operation): First number = 7, Second number = 5
- Expected Output (Temporary Variable): First number = 7, Second number = 5

Test Case 2:
- Input: First number = -3, Second number = 10
- Expected Output (Arithmetic Operation): First number = 10, Second number = -3
- Expected Output (Temporary Variable): First number = 10, Second number = -3

Test Case 3:
- Input: First number = 0, Second number = 0
- Expected Output (Arithmetic Operation): First number = 0, Second number = 0
- Expected Output (Temporary Variable): First number = 0, Second number = 0

## Troubleshooting

Common issues that may arise include:
- Input errors (non-integer input).
- Integer overflow when using arithmetic operations (for very large integers).

Solutions:
- Ensure that only valid integers are entered as input.
- Handle integer overflow by checking for it and using appropriate error-handling techniques.

## Related Resources

For a deeper understanding of swapping algorithms and techniques, consider exploring the following resources:
- [Swapping variables without a temporary variable](https://en.wikipedia.org/wiki/XOR_swap_algorithm)
- [Java documentation on basic arithmetic operations](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/operators.html)

## Conclusion

Swapping two numbers is a fundamental task in programming, and this Code Guide has demonstrated two different approaches to accomplish it in Java. Whether using arithmetic operations or a temporary variable, both approaches achieve the desired result efficiently. Understanding these techniques is essential for any programmer, and they can be applied in a wide range of programming scenarios. Happy coding!

For more coding resources and projects, follow the author's GitHub profile: [SharifdotG](https://github.com/SharifdotG).