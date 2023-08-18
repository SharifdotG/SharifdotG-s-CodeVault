# Code Guide: Sum of Two Numbers

## Introduction

Welcome to SharifdotG's CodeVault! This repository is a treasure trove of carefully categorized code snippets designed to aid fellow learners on their coding journey. Each problem is meticulously documented to provide a rich learning experience. In this Code Guide, we'll delve into the problem "Sum of Two Numbers" and explore its solution step by step.

## Problem Description

The "Sum of Two Numbers" problem involves taking two integer inputs from the user and calculating their sum. The goal is to create a program that performs this calculation and displays the result. The inputs are the two numbers to be added, and the output is their sum.

### Input:
- Two integer numbers: `firstNumber` and `secondNumber`.

### Output:
- The sum of the two input numbers.

## About the Problem

The concept of adding two numbers is a fundamental arithmetic operation used extensively in various real-life scenarios. From calculating expenses to measuring quantities, addition forms the basis of many everyday tasks. Whether you're balancing your budget or tallying up scores, the ability to compute the sum of two numbers is invaluable.

## Approach

To solve the "Sum of Two Numbers" problem, I employed a straightforward approach. I utilized the C programming language to create a program that takes two integer inputs, adds them together, and then displays the result.

### Algorithm:

1. Prompt the user to enter the first number (`firstNumber`).
2. Read and store the first number.
3. Prompt the user to enter the second number (`secondNumber`).
4. Read and store the second number.
5. Calculate the sum: `sum = firstNumber + secondNumber`.
6. Display the result: `printf("The sum of the two numbers is: %d\n", sum)`.

## Code Walkthrough

Let's break down the code step by step:

```c
#include <stdio.h>

int main() {
    int firstNumber, secondNumber, sum;

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    sum = firstNumber + secondNumber;

    printf("The sum of the two numbers is: %d\n", sum);

    return 0;
}
```

1. We start by including the necessary header file (`<stdio.h>`) for input and output operations.
2. In the `main` function, we declare three integer variables: `firstNumber`, `secondNumber`, and `sum`.
3. We prompt the user to enter the first number and use `scanf` to read and store the input in the `firstNumber` variable.
4. Similarly, we prompt the user to enter the second number and read and store it in the `secondNumber` variable.
5. We calculate the sum of the two numbers and store the result in the `sum` variable.
6. Finally, we use `printf` to display the sum to the user.

## Complexity Analysis

The time complexity of this algorithm is constant, O(1), as it involves a fixed number of operations regardless of the input values. The space complexity is also constant, as we only use a few integer variables.

## Examples

Let's walk through a couple of examples to illustrate how the code works:

### Example 1:

Input:
```
Enter the first number: 5
Enter the second number: 7
```

Output:
```
The sum of the two numbers is: 12
```

### Example 2:

Input:
```
Enter the first number: -3
Enter the second number: 10
```

Output:
```
The sum of the two numbers is: 7
```

## Test Cases

Here are some additional test cases to validate the code:

1. Input: `firstNumber = 0`, `secondNumber = 0`
   Output: `The sum of the two numbers is: 0`

2. Input: `firstNumber = -5`, `secondNumber = -3`
   Output: `The sum of the two numbers is: -8`

3. Input: `firstNumber = 100`, `secondNumber = -100`
   Output: `The sum of the two numbers is: 0`

## Troubleshooting

If you encounter any issues while running the code, consider the following:

- Make sure you're using a C compiler that supports the standard input/output functions.
- Double-check that you've correctly declared and initialized the variables (`firstNumber`, `secondNumber`, and `sum`).

If you're still facing problems, feel free to reach out for assistance.

## Related Resources

To deepen your understanding of C programming and algorithms, consider exploring the following resources:

- [C Programming Absolute Beginner's Guide (3rd Edition)](https://www.informit.com/store/c-programming-absolute-beginners-guide-3rd-edition-9780789751980)
- [Introduction to Algorithms by Thomas H. Cormen](https://mitpress.mit.edu/books/introduction-algorithms-third-edition)
- [GeeksforGeeks: C Programming Language](https://www.geeksforgeeks.org/c-programming-language/)

## Conclusion

Congratulations! You've successfully learned how to create a C program that calculates the sum of two numbers. This fundamental skill forms the basis of more complex algorithms and applications. Keep exploring the CodeVault for more intriguing problems and solutions.

For further updates, code snippets, and exciting projects, feel free to follow my GitHub profile: [SharifdotG](https://github.com/SharifdotG).

Happy coding!