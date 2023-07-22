# Here is the Code Guide for the problem `Write a program to perform input-output of all basic data types`.

## The Problem

The problem is to write a program that prompts the user to enter a value for each of the basic data types, and then prints the values that were entered. The basic data types in C are:

* char
* unsigned char
* short
* int
* unsigned int
* long
* unsigned long
* unsigned long long
* float
* double
* long double

## Code Explanation

The code for this problem is as follows:

```c
#include <stdio.h>

int main() {
  char character;
  unsigned char unsigned_character;
  short short_integer;
  int integer;
  unsigned int unsigned_integer;
  long long_integer;
  unsigned long unsigned_long;
  unsigned long long unsigned_long_long;
  float float_value;
  double double_value;
  long double long_double_value;

  // Prompt the user to enter a value for each of the basic data types.
  printf("Enter a character: ");
  character = getchar();
  getchar(); // Consume newline character

  printf("Enter an unsigned character: ");
  unsigned_character = getchar();
  getchar(); // Consume newline character

  printf("Enter a short integer: ");
  scanf("%hd", &short_integer);

  printf("Enter an integer: ");
  scanf("%d", &integer);

  printf("Enter an unsigned integer: ");
  scanf("%u", &unsigned_integer);

  printf("Enter a long integer: ");
  scanf("%ld", &long_integer);

  printf("Enter an unsigned long integer: ");
  scanf("%lu", &unsigned_long);

  printf("Enter an unsigned long long integer: ");
  scanf("%llu", &unsigned_long_long);

  printf("Enter a float: ");
  scanf("%f", &float_value);

  printf("Enter a double: ");
  scanf("%lf", &double_value);

  printf("Enter a long double: ");
  scanf("%Lf", &long_double_value);

  // Print the values that were entered.
  printf("\nThe character is: %c\n", character);
  printf("The unsigned character is: %c\n", unsigned_character);
  printf("The short integer is: %hd\n", short_integer);
  printf("The integer is: %d\n", integer);
  printf("The unsigned integer is: %u\n", unsigned_integer);
  printf("The long integer is: %ld\n", long_integer);
  printf("The unsigned long integer is: %lu\n", unsigned_long);
  printf("The unsigned long long integer is: %llu\n", unsigned_long_long);
  printf("The float is: %f\n", float_value);
  printf("The double is: %lf\n", double_value);
  printf("The long double is: %Lf\n", long_double_value);

  return 0;
}
```

The first step in the code is to declare variables for each of the basic data types. These variables are used to store the values that the user enters.

The next step is to prompt the user to enter a value for each of the basic data types. The `printf()` function is used to display a prompt on the console. The `scanf()` function is used to read a value from the console and store it in the corresponding variable.

The final step is to print the values that were entered. The `printf()` function is used to display the values on the console.

## Conclusion

This code can be used to perform input-output of all basic data types in C. To run the code, you can save it as a `.c` file and then compile and run it using a C compiler.

If you have any questions about the code, please feel free to comment in the repository.