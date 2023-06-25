# Here is the guideline for the C program to check whether a year is a leap year or not:

## Understanding the problem

The problem is to write a C program that takes a year as input and prints whether it is a leap year or not. A leap year is a year that has 366 days, instead of the usual 365 days. Leap years occur every four years, except for century years that are not divisible by 400.

## Approaching the problem

The first step is to define the variables that will be used in the program. The main variables are the year to be checked and the result of the check.

The next step is to write the code that prompts the user to enter a year and reads the year from the user.

The third step is to write the code that checks whether the year is a leap year. The following conditions must be met for a year to be a leap year:

* The year must be divisible by 4.
* The year must not be divisible by 100, unless it is also divisible by 400.

The fourth step is to write the code that prints the result of the check.

## Solving the problem

The following code solves the problem:

```c
#include <stdio.h>

int main() {

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}
```

## Further clarification

If you have any further clarifications, please feel free to comment in the repository. I will be happy to answer your questions.

## Conclusion

This program is a simple way to check whether a year is a leap year or not. It can be used to learn about the rules for leap years and to practice using the if statement in C.