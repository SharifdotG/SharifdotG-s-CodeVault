# Here is the code guide for the C program to enter two numbers and find their sum:

## The Problem

The problem is to write a C program that asks the user to enter two numbers, then finds and prints the sum of the two numbers.

## Code Explanation

The code is as follows:

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

The first line, `#include <stdio.h>`, tells the compiler to include the `stdio.h` header file, which contains the definitions for the `printf()` and `scanf()` functions.

The next line, `int main() {`, marks the beginning of the `main()` function, which is the starting point of the program.

The next three lines, `int firstNumber, secondNumber, sum;`, declare three variables: `firstNumber`, `secondNumber`, and `sum`. The `firstNumber` and `secondNumber` variables will store the two numbers entered by the user, and the `sum` variable will store the sum of the two numbers.

The next three lines,

```c
printf("Enter the first number: ");
scanf("%d", &firstNumber);

printf("Enter the second number: ");
scanf("%d", &secondNumber);
```

prompt the user to enter the two numbers, and then store the user's input in the `firstNumber` and `secondNumber` variables.

The next line,

```c
sum = firstNumber + secondNumber;
```

calculates the sum of the two numbers and stores the result in the `sum` variable.

The next line,

```c
printf("The sum of the two numbers is: %d\n", sum);
```

prints the sum of the two numbers to the console.

The last line, `return 0;`, marks the end of the `main()` function and returns a value of 0 to the operating system.

## Conclusion

This code guide has explained the problem and the code in detail. If you have any questions, please feel free to comment on the repository.

Thank you for your interest in my code!