# Code Guide - Calculate Percentage

## Introduction:
This Code Guide will walk you through the implementation of a Java program called "Calculate Percentage." The purpose of this program is to calculate the percentage of one number in relation to another number and display the result. This is a fundamental mathematical operation and can be used in various scenarios, such as grading, financial calculations, and statistics.

## Problem Description:
- **Problem Statement:** Given two numbers, a specific number (num) and a total number (totalNum), the program calculates and displays the percentage of num with respect to totalNum.

- **Input:** The user is prompted to enter two numbers, num and totalNum.

- **Output:** The program displays the percentage of num in the format "Percentage of num is: XX.XX%."

## About the Problem:

### History:
The concept of calculating percentages has been a fundamental part of mathematics and everyday life for centuries. It is used in various fields, including business, education, and science, to represent proportions and relative values.

### Information and Trivia:
- Percentage (%) is derived from the Latin word "per centum," which means "by the hundred."
- Percentages are often represented visually with pie charts, bar graphs, and other data visualization techniques.

## Approach:

### Implementation:
The program takes user input for two numbers, num and totalNum, and then calculates the percentage using the formula: `(num / totalNum) * 100`. Finally, it displays the result using formatted output.

### Algorithm & Data Structures:
- Input num and totalNum from the user.
- Calculate the percentage using the formula: `(num / totalNum) * 100`.
- Display the result with two decimal places.

## Code Walkthrough:

```java
import java.util.Scanner;

public class CalculatePercentage {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double number, totalNumber;

        // Input: Prompt the user to enter the number and totalNumber.
        System.out.print("Enter number: ");
        number = scanner.nextDouble();

        System.out.print("Enter total number: ");
        totalNumber = scanner.nextDouble();

        // Calculate the percentage and display the result with two decimal places.
        System.out.printf("Percentage of %.2f is: %.2f%%\n", number, (number / totalNumber) * 100);

        scanner.close();
    }
}
```

- We use a `Scanner` to get user input for num and totalNum.
- The `printf` statement formats and displays the result with two decimal places.

## Complexity Analysis:

### Time Complexity:
The time complexity of this program is O(1) because it performs a fixed number of operations regardless of the input size.

### Space Complexity:
The space complexity of this program is O(1) as it only uses a constant amount of memory to store the input and variables.

### Efficiency:
This program is highly efficient as it calculates the percentage in constant time and requires minimal memory.

## Execution:

Execution of the code involves the following steps:
1. The Java source code is compiled into bytecode.
2. The bytecode is executed by the Java Virtual Machine (JVM) to produce the desired output.

## Examples:

### Real-life Examples:
- Calculate the score percentage in a test.
- Determine the percentage of a budget spent.
- Calculate the percentage increase or decrease in a stock's value.

## Test Cases:

### Test Case 1:
- Input: num = 25, totalNum = 50
- Output: "Percentage of 25.00 is: 50.00%"

### Test Case 2:
- Input: num = 75, totalNum = 100
- Output: "Percentage of 75.00 is: 75.00%"

### Test Case 3:
- Input: num = 0, totalNum = 1000
- Output: "Percentage of 0.00 is: 0.00%"

## Troubleshooting:

### Common Issues:
- Invalid input (non-numeric values): Ensure that the user enters valid numeric values.
- Division by zero: Check if totalNum is zero to avoid division by zero errors.

### Solutions:
- Use error handling to handle invalid input gracefully.
- Check if totalNum is zero before performing the calculation.

## Related Resources:
- [Java Scanner Class](https://docs.oracle.com/en/java/javase/16/docs/api/java.base/java/util/Scanner.html)
- [Java printf Format String](https://docs.oracle.com/en/java/javase/16/docs/api/java.base/java/util/Formatter.html)

## Conclusion:
In this Code Guide, we've covered the implementation of a Java program that calculates and displays the percentage of one number in relation to another. This simple program is useful in a wide range of applications, making it an essential tool in mathematics and everyday life. Feel free to explore and modify the code to suit your specific needs.

Follow the author's GitHub profile for more code and projects: [SharifdotG](https://github.com/SharifdotG).