# Code Guide: Basic I/O

## Introduction
Welcome to SharifdotG's CodeVault! This repository is dedicated to helping fellow learners understand and master various programming concepts through practical code examples. In this guide, we'll delve into the fundamental topic of basic input and output (I/O) in Java. By the end of this guide, you'll have a clear understanding of how to read different data types from the user and display them on the screen.

## Problem Description
The "Basic I/O" problem focuses on taking user input for various data types (byte, character, short integer, integer, long integer, float, double, boolean, and string) and displaying the input values on the screen. This problem is essential because it teaches you how to interact with users, read different types of data, and format output.

### Problem Statement
Write a Java program that reads values for different data types from the user and displays them along with their respective data types.

## About the Problem
The need for user input and program output is ubiquitous in software development. Whether it's a calculator app or a data analysis tool, user interaction is a crucial aspect of many programs.

### Real-Life Relevance
Imagine creating a temperature converter application where the user enters a temperature in Celsius, and the program converts it to Fahrenheit. This involves taking user input, performing a calculation, and displaying the result. Our "Basic I/O" problem lays the foundation for tackling more complex scenarios like this.

### Data Types and Input
To successfully solve this problem, we'll work with a variety of Java data types: byte, character, short integer, integer, long integer, float, double, boolean, and string. Understanding how to read and display these types of data is essential for building versatile programs.

## Approach
My approach to solving this problem is to use the `Scanner` class, a powerful tool in Java for reading user input. The `Scanner` class provides methods to read different data types, making it perfect for our purpose.

### Algorithm
1. Create a `Scanner` object to read input from the console.
2. Prompt the user to enter a byte and store the value in the `byteValue` variable.
3. Prompt the user to enter a character and store the value in the `character` variable.
4. Prompt the user to enter a short integer and store the value in the `shortInteger` variable.
5. Prompt the user to enter an integer and store the value in the `integer` variable.
6. Prompt the user to enter a long integer and store the value in the `longInteger` variable.
7. Prompt the user to enter a float and store the value in the `floatValue` variable.
8. Prompt the user to enter a double and store the value in the `doubleValue` variable.
9. Prompt the user to enter a boolean and store the value in the `booleanValue` variable.
10. Prompt the user to enter a string and store the value in the `stringValue` variable.
11. Display the values of all variables along with their respective data types.

## Code Walkthrough
Now let's dive into the code and understand each step in detail.

```java
// Import the Scanner class to read input
import java.util.Scanner;

public class DataTypesInputOutput {
    public static void main(String[] args) {
        // Declare variables to store different data types
        byte byteValue;
        char character;
        short shortInteger;
        int integer;
        long longInteger;
        float floatValue;
        double doubleValue;
        boolean booleanValue;
        String stringValue;

        // Create a Scanner object to read input
        Scanner scanner = new Scanner(System.in);

        // Read and store values for each data type
        System.out.print("Enter a byte: ");
        byteValue = scanner.nextByte();

        System.out.print("Enter a character: ");
        character = scanner.next().charAt(0);

        System.out.print("Enter a short integer: ");
        shortInteger = scanner.nextShort();

        System.out.print("Enter an integer: ");
        integer = scanner.nextInt();

        System.out.print("Enter a long integer: ");
        longInteger = scanner.nextLong();

        System.out.print("Enter a float: ");
        floatValue = scanner.nextFloat();

        System.out.print("Enter a double: ");
        doubleValue = scanner.nextDouble();

        System.out.print("Enter a boolean: ");
        booleanValue = scanner.nextBoolean();

        System.out.print("Enter a string: ");
        stringValue = scanner.next();

        // Display the values with appropriate labels
        System.out.println("\nThe byte is: " + byteValue);
        System.out.println("The character is: " + character);
        System.out.println("The short integer is: " + shortInteger);
        System.out.println("The integer is: " + integer);
        System.out.println("The long integer is: " + longInteger);
        System.out.println("The float is: " + floatValue);
        System.out.println("The double is: " + doubleValue);
        System.out.println("The boolean is: " + booleanValue);
        System.out.println("The string is: " + stringValue);

        // Close the Scanner
        scanner.close();
    }
}
```

In this code, we first import the `Scanner` class to enable user input. We then declare variables for each data type to store the user's input. The `Scanner` object is created to read input from the console.

We use the `nextByte()`, `next().charAt(0)`, `nextShort()`, `nextInt()`, `nextLong()`, `nextFloat()`, `nextDouble()`, and `nextBoolean()` methods to read values for each data type. Finally, we display the entered values along with their respective data types.

## Complexity Analysis
The time complexity of this program is constant, O(1), as it performs a fixed number of operations regardless of the input. The space complexity is also constant, as it uses a fixed amount of memory to store variables.

## Examples
Let's work through some examples to illustrate how the program functions.

### Example 1:
**Input:**
```
Enter a byte: 120
Enter a character: A
Enter a short integer: 30000
Enter an integer: 150000
Enter a long integer: 1234567890
Enter a float: 3.14
Enter a double: 2.71828
Enter a boolean: true
Enter a string: Hello
```

**Output:**
```
The byte is: 120
The character is: A
The short integer is: 30000
The integer is: 150000
The long integer is: 1234567890
The float is: 3.14
The double is: 2.71828
The boolean is: true
The string is: Hello
```

### Example 2:
**Input:**
```
Enter a byte: -50
Enter a character: X
Enter a short integer: 20000
Enter an integer: 98765
Enter a long integer: 987654321
Enter a float: 2.718
Enter a double: 3.14159
Enter a boolean: false
Enter a string: World
```

**Output:**
```
The byte is: -50
The character is: X
The short integer is: 20000
The integer is: 98765
The long integer

 is: 987654321
The float is: 2.718
The double is: 3.14159
The boolean is: false
The string is: World
```

## Test Cases
To ensure the program's correctness, let's consider a few test cases covering a range of input values.

1. **Input:**
   ```
   Enter a byte: 0
   Enter a character: Z
   Enter a short integer: 1000
   Enter an integer: 0
   Enter a long integer: 999999999
   Enter a float: 0.0
   Enter a double: 1.0
   Enter a boolean: true
   Enter a string: Test
   ```
   **Output:**
   ```
   The byte is: 0
   The character is: Z
   The short integer is: 1000
   The integer is: 0
   The long integer is: 999999999
   The float is: 0.0
   The double is: 1.0
   The boolean is: true
   The string is: Test
   ```

2. **Input:**
   ```
   Enter a byte: 127
   Enter a character: @
   Enter a short integer: 32000
   Enter an integer: -98765
   Enter a long integer: -1234567890
   Enter a float: -3.14
   Enter a double: -2.71828
   Enter a boolean: false
   Enter a string: Example
   ```
   **Output:**
   ```
   The byte is: 127
   The character is: @
   The short integer is: 32000
   The integer is: -98765
   The long integer is: -1234567890
   The float is: -3.14
   The double is: -2.71828
   The boolean is: false
   The string is: Example
   ```

## Troubleshooting
While running the program, you might encounter a few common issues:

1. **Input Mismatch Exception:** This occurs when the entered data type does not match the expected input. Double-check that you're providing the correct data type as prompted.
2. **Scanner Not Closed:** If you forget to close the `Scanner` object at the end of the program, it might lead to resource leaks. Always remember to close the `Scanner` using `scanner.close()`.

## Related Resources
To deepen your understanding of Java I/O and data types, consider exploring the following resources:

1. Java Scanner Documentation: [Scanner (Java Platform SE 8)](https://docs.oracle.com/javase/8/docs/api/java/util/Scanner.html)
2. Java Data Types: [Primitive Data Types in Java](https://www.geeksforgeeks.org/data-types-in-java/)
3. Input and Output in Java: [Java Input and Output (I/O)](https://www.baeldung.com/java-io)
4. Java Exception Handling: [Java Exception Handling](https://www.javatpoint.com/exception-handling-in-java)
5. GitHub Repository: [SharifdotG's CodeVault](https://github.com/SharifdotG/SharifdotG-s-CodeVault)

## Conclusion
Congratulations! You've successfully learned how to read and display different data types using Java's `Scanner` class. This foundational knowledge will serve you well as you tackle more complex programming challenges in the future.

If you found this Code Guide helpful, be sure to check out my GitHub profile [SharifdotG](https://github.com/SharifdotG) for more insightful coding examples and guides. Happy coding and keep learning!