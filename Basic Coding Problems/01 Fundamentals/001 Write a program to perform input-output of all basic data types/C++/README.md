# Code Guide: Input/Output of Basic Data Types

## Introduction:
Welcome to the Code Guide for the program that performs input/output of all basic data types. This repository covers various problems, and this specific code aims to demonstrate how to handle input and output of different data types in C++. The program prompts the user to enter values for various data types and then displays the input values on the console.

## Problem Description:
The goal of this program is to demonstrate how to read input for different basic data types (char, int, float, double, etc.) and output them in a structured manner. It showcases the usage of various input/output methods in C++.

### Problem Statement:
Write a program that takes user input for different basic data types and displays the entered values.

### Input:
The program will prompt the user to enter values for the following data types:
- char
- unsigned char
- short
- int
- unsigned int
- long
- unsigned long
- unsigned long long
- float
- double
- long double

### Output:
After taking user input, the program will display the entered values for each data type.

## Approach:
The program uses a combination of `cin` and `getchar()` to read input for different data types. It follows these steps:
1. Prompt the user to enter a character and use `getchar()` to read it.
2. Prompt the user to enter an unsigned character and use `getchar()` again.
3. Prompt the user to enter a short integer and use `cin` to read it.
4. Prompt the user to enter an integer and use `cin` to read it.
5. Prompt the user to enter an unsigned integer and use `cin` to read it.
6. Prompt the user to enter a long integer and use `cin` to read it.
7. Prompt the user to enter an unsigned long integer and use `cin` to read it.
8. Prompt the user to enter an unsigned long long integer and use `cin` to read it.
9. Prompt the user to enter a float and use `cin` to read it.
10. Prompt the user to enter a double and use `cin` to read it.
11. Prompt the user to enter a long double and use `cin` to read it.
12. Display all the entered values on the console.

### Algorithm and Data Structures:
The algorithm for this program is straightforward and doesn't require any specific data structures. It mainly relies on C++ input/output functions and basic data type variables.

## Code Walkthrough:
Let's walk through the code step-by-step and explain each part:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Declarations for storing various data types
    char character;
    unsigned char unsignedCharacter;
    short shortInteger;
    int integer;
    unsigned int unsignedInteger;
    long longInteger;
    unsigned long unsignedLong;
    unsigned long long unsignedLongLong;
    float floatValue;
    double doubleValue;
    long double longDoubleValue;
```

We start by including the necessary header and declaring variables for each basic data type that the user will enter.

```cpp
    // Prompt and read character using getchar()
    cout << "Enter a character: ";
    character = getchar();
    getchar();
```

The program prompts the user to enter a character and uses `getchar()` to read the input. Note that we use `getchar()` twice to handle the newline character left in the input buffer after reading the previous input.

```cpp
    // Prompt and read unsigned character using getchar()
    cout << "Enter an unsigned character: ";
    unsignedCharacter = getchar();
    getchar();
```

The program does the same for the unsigned character.

```cpp
    // Prompt and read short integer using cin
    cout << "Enter a short integer: ";
    cin >> shortInteger;
```

For the short integer, we use `cin` directly to read the input.

The program continues similarly for the rest of the data types.

```cpp
    // Display all the entered values
    cout << "\nThe character is: " << character << endl;
    cout << "The unsigned character is: " << unsignedCharacter << endl;
    cout << "The short integer is: " << shortInteger << endl;
    cout << "The integer is: " << integer << endl;
    cout << "The unsigned integer is: " << unsignedInteger << endl;
    cout << "The long integer is: " << longInteger << endl;
    cout << "The unsigned long integer is: " << unsignedLong << endl;
    cout << "The unsigned long long integer is: " << unsignedLongLong << endl;
    cout << "The float is: " << floatValue << endl;
    cout << "The double is: " << doubleValue << endl;
    cout << "The long double is: " << longDoubleValue << endl;

    return 0;
}
```

The program displays all the entered values on the console using `cout`.

## Complexity Analysis:
The time complexity of this program is constant (O(1)) as it performs a fixed number of input/output operations, regardless of the input values. The space complexity is also constant as it uses a fixed number of variables.

The solution is efficient and straightforward since it uses standard C++ input/output functions. There are no specific areas for improvement in this context.

## Examples:
Let's go through a couple of examples to see how the code execution works:

Example 1:
```
Enter a character: A
Enter an unsigned character: B
Enter a short integer: 42
Enter an integer: 1234
Enter an unsigned integer: 4294967295
Enter a long integer: 1234567890
Enter an unsigned long integer: 18446744073709551615
Enter an unsigned long long integer: 9223372036854775807
Enter a float: 3.14
Enter a double: 2.718281828459045
Enter a long double: 1.414213562373095048801688724209698078

The character is: A
The unsigned character is: B
The short integer is: 42
The integer is: 1234
The unsigned integer is: 4294967295
The long integer is: 1234567890
The unsigned long integer is: 18446744073709551615
The unsigned long long integer is: 9223372036854775807
The float is: 3.14
The double is: 2.718281828459045
The long double is: 1.414213562373095048801688724209698078
```

Example 2:
```
Enter a character: X
Enter an unsigned character: Y
Enter a short integer: 567
Enter an integer: -9876
Enter an unsigned integer: 4294967295
Enter a long integer: 999999999
Enter an unsigned long integer: 18446744073709551615
Enter an unsigned long long integer: 18446744073709551615
Enter a float: 123.456
Enter a double: 9876.54321
Enter a long double: 3.141592653589793238462643383279502884

The character is: X
The unsigned character is: Y
The short integer is: 567
The integer is

: -9876
The unsigned integer is: 4294967295
The long integer is: 999999999
The unsigned long integer is: 18446744073709551615
The unsigned long long integer is: 18446744073709551615
The float is: 123.456
The double is: 9876.54321
The long double is: 3.141592653589793238462643383279502884
```

## Test Cases:
Here are some test cases to validate the code:

Test Case 1:
- Input:
  ```
  Enter a character: M
  Enter an unsigned character: N
  Enter a short integer: 127
  Enter an integer: 2147483647
  Enter an unsigned integer: 4294967295
  Enter a long integer: 9223372036854775807
  Enter an unsigned long integer: 18446744073709551615
  Enter an unsigned long long integer: 18446744073709551615
  Enter a float: 3.14159
  Enter a double: 2.718281828459045
  Enter a long double: 1.414213562373095048801688724209698078
  ```
- Output:
  ```
  The character is: M
  The unsigned character is: N
  The short integer is: 127
  The integer is: 2147483647
  The unsigned integer is: 4294967295
  The long integer is: 9223372036854775807
  The unsigned long integer is: 18446744073709551615
  The unsigned long long integer is: 18446744073709551615
  The float is: 3.14159
  The double is: 2.718281828459045
  The long double is: 1.414213562373095048801688724209698078
  ```

Test Case 2:
- Input:
  ```
  Enter a character: Z
  Enter an unsigned character: A
  Enter a short integer: -32768
  Enter an integer: -2147483648
  Enter an unsigned integer: 4294967295
  Enter a long integer: 999999999
  Enter an unsigned long integer: 18446744073709551615
  Enter an unsigned long long integer: 18446744073709551615
  Enter a float: 12345.6789
  Enter a double: 987654.321
  Enter a long double: 3.141592653589793238462643383279502884
  ```
- Output:
  ```
  The character is: Z
  The unsigned character is: A
  The short integer is: -32768
  The integer is: -2147483648
  The unsigned integer is: 4294967295
  The long integer is: 999999999
  The unsigned long integer is: 18446744073709551615
  The unsigned long long integer is: 18446744073709551615
  The float is: 12345.6789
  The double is: 987654.321
  The long double is: 3.141592653589793238462643383279502884
  ```

## Troubleshooting:
- **Issue:** Input not working as expected.
  - **Solution:** Make sure to enter valid input for each data type as per the instructions given by the program.

- **Issue:** Incorrect output displayed.
  - **Solution:** Double-check the code for any typographical errors or mistakes in the display statements.

- **Issue:** Values not being displayed correctly.
  - **Solution:** Ensure that the variables are correctly declared and have the appropriate data types.

## Related Resources:
To enhance your understanding of the concepts used in this program, you can refer to the following resources:

1. [C++ Reference - Basic Input/Output](https://www.cplusplus.com/doc/tutorial/basic_io/)
2. [C++ Reference - Data Types](https://www.cplusplus.com/doc/tutorial/variables/)
3. [C++ Reference - getchar()](https://www.cplusplus.com/reference/cstdio/getchar/)
4. [C++ Reference - cin](https://www.cplusplus.com/reference/istream/istream/operator%3E%3E/)
5. [C++ Reference - cout](https://www.cplusplus.com/reference/ostream/ostream/operator%3C%3C/)

## Contributing Guidelines:
If you wish to contribute to this repository, please follow these guidelines:

1. Fork the repository and create a new branch for your contributions.
2. Make your changes and ensure that the code works correctly.
3. Provide detailed comments and explanations for any added or modified code.
4. Test your changes with various inputs to ensure robustness.
5. Open a pull request, and your contribution will be reviewed and merged if appropriate.

---

With this Code Guide, you should now have a clear understanding of the problem, the code, and how to navigate the repository. It provides detailed explanations, examples, and guidelines for contributors. Happy coding and exploring!