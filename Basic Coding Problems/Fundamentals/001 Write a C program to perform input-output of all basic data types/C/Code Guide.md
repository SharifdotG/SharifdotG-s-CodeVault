## Understanding the problem

The problem statement asks you to write a C program to perform input/output of all basic data types. This means that you need to create variables of each of the basic data types, prompt the user to enter a value for each variable, and then print the value that was entered.

## Approaching the problem

Here is a possible approach to solving the problem:

1. First, you need to declare variables of each of the basic data types.
2. Next, you need to prompt the user to enter a value for each variable.
3. Then, you need to use the `scanf()` function to read the user's input and store it in the corresponding variable.
4. Finally, you need to use the `printf()` function to print the value that was entered.

## Solving the problem

Here is the C code that solves the problem:

```c
#include <stdio.h>

int main() {

  // Declare variables of each of the basic data types.
  char charVal;
  unsigned char unsignedCharVal;
  short shortVal;
  int intVal;
  unsigned int unsignedIntVal;
  long longVal;
  unsigned long unsignedLongVal;
  unsigned long long unsignedLongLongVal;
  float floatVal;
  double doubleVal;
  long double longDoubleVal;

  // Prompt the user to enter a value for each of the basic data types.
  printf("Enter a character: ");
  charVal = getchar();
  getchar();

  printf("Enter an unsigned character: ");
  unsignedCharVal = getchar();
  getchar();

  printf("Enter a short integer: ");
  scanf("%hd", &shortVal);

  printf("Enter an integer: ");
  scanf("%d", &intVal);

  printf("Enter an unsigned integer: ");
  scanf("%u", &unsignedIntVal);

  printf("Enter a long integer: ");
  scanf("%ld", &longVal);

  printf("Enter an unsigned long integer: ");
  scanf("%lu", &unsignedLongVal);

  printf("Enter an unsigned long long integer: ");
  scanf("%llu", &unsignedLongLongVal);

  printf("Enter a float: ");
  scanf("%f", &floatVal);

  printf("Enter a double: ");
  scanf("%lf", &doubleVal);

  printf("Enter a long double: ");
  scanf("%Lf", &longDoubleVal);

  // Print the values that were entered.
  printf("\nThe character is: %c\n", charVal);
  printf("The unsigned character is: %c\n", unsignedCharVal);
  printf("The short integer is: %hd\n", shortVal);
  printf("The integer is: %d\n", intVal);
  printf("The unsigned integer is: %u\n", unsignedIntVal);
  printf("The long integer is: %ld\n", longVal);
  printf("The unsigned long integer is: %lu\n", unsignedLongVal);
  printf("The unsigned long long integer is: %llu\n", unsignedLongLongVal);
  printf("The float is: %f\n", floatVal);
  printf("The double is: %lf\n", doubleVal);
  printf("The long double is: %Lf\n", longDoubleVal);

  return 0;
}
```

## Testing the code

You can test the code by compiling and running it. When you run the code, it will prompt you to enter a value for each of the basic data types. After you enter a value for each data type, the code will print the value that you entered.

## If you have any queries, you can comment in the repository.

I hope this helps!