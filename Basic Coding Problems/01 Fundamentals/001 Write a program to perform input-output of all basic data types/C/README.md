# Code Guide: Input/Output of Basic Data Types

## Introduction:
Welcome to the code guide for the "Input/Output of Basic Data Types" problem. This repository aims to provide solutions for performing input and output operations for various basic data types in the C programming language. The code provided here allows users to enter values for different data types and then displays the entered values on the console.

## Problem Description:
The code provided aims to perform input/output operations for the following basic data types:
- `char`
- `unsigned char`
- `short`
- `int`
- `unsigned int`
- `long`
- `unsigned long`
- `unsigned long long`
- `float`
- `double`
- `long double`

Each data type's value is read from the user using appropriate input functions (`getchar()` and `scanf()`), and then the entered values are displayed on the console using `printf()`.

### Input Specifications:
The user is prompted to enter values for each data type one by one.

### Output Specifications:
The program outputs the entered values for each data type.

## Approach:
The program follows a straightforward approach, using a combination of `getchar()` and `scanf()` functions to read user inputs for different data types. After reading the inputs, the program uses `printf()` to display the entered values on the console.

The code employs the following steps:
1. Prompt the user to enter a `char` value and read it using `getchar()`.
2. Prompt the user to enter an `unsigned char` value and read it using `getchar()`.
3. Prompt the user to enter a `short` value and read it using `scanf("%hd", &shortInteger)`.
4. Prompt the user to enter an `int` value and read it using `scanf("%d", &integer)`.
5. Prompt the user to enter an `unsigned int` value and read it using `scanf("%u", &unsignedInteger)`.
6. Prompt the user to enter a `long` value and read it using `scanf("%ld", &longInteger)`.
7. Prompt the user to enter an `unsigned long` value and read it using `scanf("%lu", &unsignedLong)`.
8. Prompt the user to enter an `unsigned long long` value and read it using `scanf("%llu", &unsignedLongLong)`.
9. Prompt the user to enter a `float` value and read it using `scanf("%f", &floatValue)`.
10. Prompt the user to enter a `double` value and read it using `scanf("%lf", &doubleValue)`.
11. Prompt the user to enter a `long double` value and read it using `scanf("%Lf", &longDoubleValue)`.

Finally, the program displays all the entered values using `printf()` statements.

## Code Walkthrough:
Let's break down the code into logical sections and explain each part step-by-step:

```c
#include <stdio.h>

int main() {
    // Declaration of variables for various data types
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

    // Input operations for each data type
    printf("Enter a character: ");
    character = getchar();
    getchar();

    // (The same pattern is followed for the remaining data types)

    // Output operations for each data type
    printf("\nThe character is: %c\n", character);
    // (The same pattern is followed for the remaining data types)

    return 0;
}
```

### Explanation:
1. The code begins by including the necessary header file `stdio.h` for input/output operations in C.

2. Variables are declared for each data type that we want to input and output.

3. The program prompts the user to enter a value for the `char` data type using `printf()`, and then it reads the character using `getchar()`. Note that we use `getchar()` twice in this case, once to read the character and then another `getchar()` to consume the newline character left in the input buffer.

4. Similar input operations are performed for the remaining data types using `scanf()`.

5. After reading all the inputs, the program displays the entered values for each data type using `printf()`.

## Complexity Analysis:
The time complexity of the code is constant for each data type since the input and output operations are done independently for each variable. Thus, the time complexity is O(1).

The space complexity is also constant as we are using a fixed number of variables regardless of the input values. Hence, the space complexity is O(1).

## Examples:
Let's walk through an example execution of the code to demonstrate its functionality:

```
Enter a character: A
Enter an unsigned character: B
Enter a short integer: 12345
Enter an integer: -987654
Enter an unsigned integer: 4294967295
Enter a long integer: 9223372036854775807
Enter an unsigned long integer: 18446744073709551615
Enter an unsigned long long integer: 18446744073709551615
Enter a float: 3.14
Enter a double: 1234567890.1234567
Enter a long double: 9876543210.987654321

The character is: A
The unsigned character is: B
The short integer is: 12345
The integer is: -987654
The unsigned integer is: 4294967295
The long integer is: 9223372036854775807
The unsigned long integer is: 18446744073709551615
The unsigned long long integer is: 18446744073709551615
The float is: 3.140000
The double is: 1234567890.123457
The long double is: 9876543210.987654
```

## Test Cases:
It is essential to include various test cases to validate the code's functionality. Below are some example test cases:

1. **Test Case 1** - Inputs with different data types:
   - Input: `A`, `B`, `12345`, `-987654`, `4294967295`, `9223372036854775807`, `18446744073709551615`, `18446744073709551615`, `3.14`, `1234567890.1234567`, `9876543210.987654321`
   - Output: As shown in the example execution above.

2. **Test Case 2** - Inputs with edge values:
   - Input: `Z`, `z`, `32767`, `-2147483648`, `4294967295`, `9223372036854775807`, `0`, `18446744073709551615`, `0`, `1.0`, `0.000000000000001`
   - Output: The entered values for each data type.

3. **Test Case 3** - Inputs with invalid characters:
   - Input: `#`, `@`, `abcd`, `xyz`, `!@#$%^&*()`, `123.45`
   - Output: The entered values for each data type.

## Troubleshooting:


### Issue: Reading incorrect values or unexpected behavior during input.
**Solution:** Ensure that you are entering the correct data type for each input prompt. For example, when prompted for a character, enter a single character (e.g., 'A'). For numeric inputs, enter valid numeric values without any additional characters or symbols.

### Issue: Garbage values or unexpected outputs during display.
**Solution:** Double-check your input and ensure that you have entered valid values. Verify that you have correctly implemented the `printf()` statements for displaying the values.

## Related Resources:
For further understanding of input/output operations in C and data types, you may refer to the following resources:
- [C Input/Output (I/O) Functions](https://www.tutorialspoint.com/cprogramming/c_input_output.htm)
- [C Data Types](https://www.geeksforgeeks.org/c-data-types/)

Additionally, you can explore C programming tutorials and books to enhance your knowledge in the subject.

## Contributing Guidelines:
Contributions to this repository are welcome! If you'd like to contribute, please follow these guidelines:
1. Fork the repository and create a new branch for your changes.
2. Make your changes, ensuring that the code is well-documented and adheres to the repository's format.
3. Test your changes thoroughly to avoid any issues.
4. Submit a pull request with a clear description of your changes and the problem they address.

Together, we can make this repository a valuable resource for everyone to understand and learn about various C programming concepts.

---
By following this comprehensive code guide, you will have a clear understanding of the problem, the code's functionality, and how to use the repository effectively. Happy coding and learning!