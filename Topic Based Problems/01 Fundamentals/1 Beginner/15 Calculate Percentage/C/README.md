# Code Guide - Calculate Percentage

## Introduction:
This Code Guide is designed to help you understand how to calculate the percentage of one number in relation to another using a simple C program. We will break down the code step by step, explaining its purpose, implementation, and providing examples for better comprehension.

## Problem Description:
The problem at hand is to calculate the percentage of a given number in relation to a total number. The program takes two inputs: the number you want to find the percentage of and the total number it relates to. It then calculates and displays the percentage.

### Input:
- The number for which you want to calculate the percentage.
- The total number to which the first number relates.

### Output:
- The calculated percentage.

## About the Problem:
### History:
Calculating percentages is a common mathematical operation used in various real-life scenarios, such as calculating exam scores, financial calculations, and data analysis.

### Information and Trivias:
- Percentages are often represented with the '%' symbol.
- The formula to calculate the percentage is: `(number / totalNumber) * 100`.

## Approach:
### Implementation:
The code takes two input values: 'number' and 'totalNumber'. It then uses the formula mentioned above to calculate the percentage and displays the result.

### Algorithm & Data Structures:
No complex algorithms or data structures are used in this code. It's a straightforward mathematical calculation.

## Code Walkthrough:
Let's break down the code into logical sections and explain each part step-by-step.

```c
#include <stdio.h>

int main() {
    double number, totalNumber;

    printf("Enter number: ");
    scanf("%lf", &number);

    printf("Enter total number: ");
    scanf("%lf", &totalNumber);

    printf("Percentage of %.2lf is: %.2lf%%\n", number, (number / totalNumber) * 100);

    return 0;
}
```

1. We include the standard input/output library (`<stdio.h>`).

2. In the `main()` function, we declare two variables, `number` and `totalNumber`, to store user input.

3. We prompt the user to enter the value of 'number' and read it using `scanf()`.

4. Similarly, we prompt the user to enter the value of 'totalNumber' and read it using `scanf()`.

5. We then calculate the percentage using the formula `(number / totalNumber) * 100` and display the result using `printf()`. The format specifier `%.2lf` is used to display the result with two decimal places, and `%%` is used to display the '%' symbol.

## Complexity Analysis:
### Time Complexity:
The time complexity of this code is O(1), as it performs a fixed number of operations regardless of the input values.

### Space Complexity:
The space complexity is also O(1) because it uses a constant amount of memory to store the input values and temporary variables.

### Efficiency:
This code is efficient for its intended purpose, and there are no apparent areas for optimization, as it directly applies the percentage formula.

## Execution:
The code execution starts from the `main()` function and proceeds sequentially. Input is read using `scanf()`, calculations are performed, and the result is displayed using `printf()`.

## Examples:
This code can be used in various real-life scenarios, such as:
- Calculating the percentage of correct answers on a test.
- Determining the percentage increase or decrease in a stock price.
- Analyzing the percentage of votes received by different candidates in an election.

## Test Cases:
Here are some test cases to validate the code:

1. **Input**: 
   - Number: 75
   - Total Number: 100
   - **Output**: Percentage of 75.00 is: 75.00%

2. **Input**: 
   - Number: 40
   - Total Number: 200
   - **Output**: Percentage of 40.00 is: 20.00%

3. **Input**: 
   - Number: 0
   - Total Number: 50
   - **Output**: Percentage of 0.00 is: 0.00%

## Troubleshooting:
- If the program is not compiling, ensure that you have a C compiler installed and that there are no syntax errors in the code.
- Make sure you enter valid numeric values for 'number' and 'totalNumber' when prompted.

## Related Resources:
- [C Programming Absolute Beginner's Guide](https://www.amazon.com/Programming-Absolute-Beginners-Perry-Crawford/dp/0789751984)
- [Percentage Calculation - Wikipedia](https://en.wikipedia.org/wiki/Percentage)

## Conclusion:
This code provides a simple and effective way to calculate percentages. It is a fundamental mathematical operation with practical applications in various fields. Understanding this code will enhance your ability to perform percentage calculations in your own projects. For more code examples and programming insights, you can follow the GitHub profile of the author at [SharifdotG](https://github.com/SharifdotG).