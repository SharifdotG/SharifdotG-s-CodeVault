# Code Guide - Swap Two Numbers

## Introduction

This Code Guide addresses the problem of swapping two numbers using different approaches in C++. The problem involves exchanging the values of two variables without using a temporary variable. We will explore three different implementations: using arithmetic operations, using a temporary variable, and utilizing the `swap` function from the C++ standard library.

## Problem Description

### Problem Statement

Swap the values of two input integers without using a temporary variable.

### Input

- Two integers, `firstNumber` and `secondNumber`.

### Output

- The two integers with their values swapped.

## About the Problem

### History

The problem of swapping two numbers is a fundamental programming task that has been encountered in various real-life scenarios. For example, it is often used in sorting algorithms, graphics programming, and general data manipulation tasks.

### Information and Trivia

- This problem is a classic example of algorithmic thinking and problem-solving in computer science.
- Swapping two variables is a basic operation in many programming languages.
- There are multiple ways to solve this problem, each with its advantages and disadvantages.

## Approach

### Implementation

We will explore three different implementations:

1. **Arithmetic Operation:** Swap two numbers without using a temporary variable by performing arithmetic operations.
2. **Temporary Variable:** Swap two numbers using a temporary variable.
3. **Function:** Utilize the `swap` function from the C++ standard library.

### Algorithm & Data Structures

No complex algorithms or data structures are required for this problem. We'll use basic arithmetic operations, temporary variables, and the `swap` function.

## Code Walkthrough

### Arithmetic Operation

I apologize for the oversight. Let's provide a code walkthrough with snippets for each of the three implementations.

## Code Walkthrough

### Arithmetic Operation

```cpp
// Read two integers from the user
int firstNumber, secondNumber;
cout << "Enter first number: ";
cin >> firstNumber;
cout << "Enter second number: ";
cin >> secondNumber;

// Display the original values
cout << "Before swapping: " << endl;
cout << "First number: " << firstNumber << endl;
cout << "Second number: " << secondNumber << endl;

// Swap the numbers using arithmetic operations
firstNumber = firstNumber + secondNumber;
secondNumber = firstNumber - secondNumber;
firstNumber = firstNumber - secondNumber;

// Display the swapped values
cout << "After swapping: " << endl;
cout << "First number: " << firstNumber << endl;
cout << "Second number: " << secondNumber << endl;
```

1. Read two integers, `firstNumber` and `secondNumber`, from the user.
2. Display the original values of both numbers.
3. Swap the numbers using arithmetic operations:
   - Add `firstNumber` and `secondNumber` and store the result in `firstNumber`.
   - Subtract `secondNumber` from `firstNumber` and store the result in `secondNumber`.
   - Subtract the new `secondNumber` from the modified `firstNumber` and store it back in `firstNumber`.
4. Display the swapped values.

### Temporary Variable

```cpp
// Read two integers from the user
int firstNumber, secondNumber;
cout << "Enter first number: ";
cin >> firstNumber;
cout << "Enter second number: ";
cin >> secondNumber;

// Display the original values
cout << "Before swapping: " << endl;
cout << "First number: " << firstNumber << endl;
cout << "Second number: " << secondNumber << endl;

// Swap the numbers using a temporary variable
int temp;
temp = firstNumber;
firstNumber = secondNumber;
secondNumber = temp;

// Display the swapped values
cout << "After swapping: " << endl;
cout << "First number: " << firstNumber << endl;
cout << "Second number: " << secondNumber << endl;
```

1. Read two integers, `firstNumber` and `secondNumber`, from the user.
2. Display the original values of both numbers.
3. Swap the numbers using a temporary variable:
   - Store the value of `firstNumber` in a temporary variable, `temp`.
   - Assign the value of `secondNumber` to `firstNumber`.
   - Assign the value of `temp` (which holds the original `firstNumber` value) to `secondNumber`.
4. Display the swapped values.

### Function

```cpp
// Read two integers from the user
int firstNumber, secondNumber;
cout << "Enter first number: ";
cin >> firstNumber;
cout << "Enter second number: ";
cin >> secondNumber;

// Display the original values
cout << "Before swapping: " << endl;
cout << "First number: " << firstNumber << endl;
cout << "Second number: " << secondNumber << endl;

// Use the swap function to swap the numbers
swap(firstNumber, secondNumber);

// Display the swapped values
cout << "After swapping: " << endl;
cout << "First number: " << firstNumber << endl;
cout << "Second number: " << secondNumber << endl;
```

1. Read two integers, `firstNumber` and `secondNumber`, from the user.
2. Display the original values of both numbers.
3. Use the `swap` function from the C++ standard library to swap the numbers.
4. Display the swapped values.

## Complexity Analysis

### Time Complexity

- All three implementations have a time complexity of O(1) because they involve a fixed number of operations regardless of the input values.

### Space Complexity

- All three implementations have a space complexity of O(1) because they only use a constant amount of memory.

### Efficiency

- The efficiency of the three implementations is similar, but using the `swap` function is generally more readable and considered a best practice in C++.

## Execution

The C++ code provided in this guide can be executed on a compatible C++ development environment. It reads two integers, swaps them using the specified method, and displays the swapped values.

## Examples

This problem can be applied in various scenarios. For example, it can be used in:

- Sorting algorithms to rearrange elements efficiently.
- Graphic programming to swap the coordinates of two points.
- Data manipulation tasks when reordering elements in an array.

## Test Cases

### Test Case 1

Input:
```
Enter first number: 5
Enter second number: 10
```

Output:
```
Before swapping:
First number: 5
Second number: 10
After swapping:
First number: 10
Second number: 5
```

### Test Case 2

Input:
```
Enter first number: -3
Enter second number: 7
```

Output:
```
Before swapping:
First number: -3
Second number: 7
After swapping:
First number: 7
Second number: -3
```

## Troubleshooting

Common issues that users might encounter include:

- Entering non-integer values: The code expects integer input, so entering non-integer values will result in errors.
- Input validation: The code does not include input validation, so unexpected input may lead to unpredictable behavior.

To handle these issues, consider adding input validation and error handling mechanisms.

## Related Resources

- [C++ Standard Library `swap`](https://en.cppreference.com/w/cpp/algorithm/swap)
- [Swapping variables without a temporary variable](https://en.wikipedia.org/wiki/XOR_swap_algorithm)

## Conclusion

This Code Guide addressed the problem of swapping two numbers in C++ using three different approaches: arithmetic operations, a temporary variable, and the `swap` function from the C++ standard library. Each implementation was explained in detail, and test cases were provided to validate the code's functionality.

Feel free to explore and adapt these solutions for your own programming needs. For more code examples and resources, consider following the GitHub profile of the author: [SharifdotG](https://github.com/SharifdotG).