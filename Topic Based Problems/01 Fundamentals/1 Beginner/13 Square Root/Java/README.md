# Code Guide - Square Root

## Introduction
This Code Guide explains the implementation of a Java program to calculate the square root of a given number. The program takes user input, computes the square root using the `Math.sqrt` method, and displays the result. It is a simple example of using Java to perform mathematical calculations.

## Problem Description
The problem is to calculate the square root of a given number.

**Input:** 
- A real number (double) entered by the user.

**Output:**
- The square root of the input number, rounded to two decimal places.

## About the Problem
### History
The concept of finding square roots dates back to ancient civilizations like the Babylonians and Egyptians. Early methods used geometric constructions, while modern methods involve numerical algorithms and mathematical functions.

### Information and Trivia
- The square root (√) is the inverse operation of squaring a number.
- Square roots are used in various scientific and engineering applications, such as calculating distances, solving equations, and modeling physical phenomena.

## Approach
### Implementation
The program simply takes a user input number and calculates its square root using the `Math.sqrt` method from the Java Math library.

### Algorithm & Data Structures
No specific algorithm or data structures are used in this program, as the square root calculation is handled by the built-in `Math.sqrt` function.

## Code Walkthrough
Let's break down the code into logical sections and explain each part step-by-step.

```java
import java.util.Scanner;

public class SquareRoot {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double number;

        System.out.print("Enter number: ");
        number = scanner.nextDouble();

        System.out.printf("Square root of %.2f is: %.2f%n", number, Math.sqrt(number));

        scanner.close();
    }
}
```

1. We import the `Scanner` class to read user input.
2. We declare a variable `number` to store the input value.
3. The program prompts the user to enter a number and reads it using `scanner.nextDouble()`.
4. It then calculates the square root of the input number using `Math.sqrt(number)`.
5. Finally, it displays the result with two decimal places using `System.out.printf`.

## Complexity Analysis
### Time Complexity
The time complexity of this program is O(1) because the square root calculation is a constant-time operation, and there are no loops or iterations.

### Space Complexity
The space complexity is also O(1) because the program only uses a fixed amount of memory to store the input number and a few variables.

### Efficiency
The solution is efficient for its intended purpose of calculating square roots. There are no significant areas for improvement.

## Execution
The code is executed in the following steps:
1. The Java source code is compiled into bytecode by the Java compiler.
2. The bytecode is executed by the Java Virtual Machine (JVM).
3. The JVM interprets the bytecode and performs the square root calculation.

## Examples
This program can be implemented in various scenarios, such as:
- Engineering calculations involving square roots of physical quantities.
- Scientific research where square roots are needed for data analysis.
- Educational tools to help students learn about mathematical operations.

## Test Cases
Here are some test cases to validate the program:
1. **Input:** 9.0
   **Output:** Square root of 9.00 is: 3.00
2. **Input:** 2.5
   **Output:** Square root of 2.50 is: 1.58
3. **Input:** 16.0
   **Output:** Square root of 16.00 is: 4.00

### Troubleshooting
Common issues users might encounter:
- Inputting a negative number: The program does not handle negative numbers, and the result will be NaN (Not-a-Number).
- Providing non-numeric input: Entering non-numeric characters will result in a runtime exception.

## Related Resources
- [Java Math Class](https://docs.oracle.com/en/java/javase/16/docs/api/java.base/java/lang/Math.html)
- [Square Root on Wikipedia](https://en.wikipedia.org/wiki/Square_root)

## Conclusion
This Java program efficiently calculates the square root of a user-provided number. It's a simple yet essential mathematical operation with a wide range of applications in science, engineering, and everyday life. For more code examples and projects, you can follow the [GitHub Profile](https://github.com/SharifdotG). Happy coding!