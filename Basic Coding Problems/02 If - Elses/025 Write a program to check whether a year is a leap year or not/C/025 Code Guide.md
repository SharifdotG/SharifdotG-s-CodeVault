# Here is the Code Guide for the leap year program in C:

**The Problem**

The problem is to write a program to check whether a year is a leap year or not. A leap year is a year that has 366 days, instead of the usual 365 days. Leap years occur every four years, except for years that are divisible by 100 but not by 400.

**Code Explanation**

The code to check whether a year is a leap year is as follows:

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

The first line of code, `#include <stdio.h>`, includes the `stdio.h` header file, which contains the definitions for the `printf()` and `scanf()` functions.

The next line of code, `int main()`, declares the `main()` function, which is the entry point for the program.

The `printf()` function is used to print the following message to the console:

```c
Enter a year:
```

The `scanf()` function is used to read the year from the user.

The `if` statement checks whether the year is divisible by 4 and not divisible by 100, or if the year is divisible by 400. If the year meets either of these conditions, then it is a leap year. Otherwise, it is not a leap year.

The `printf()` function is used to print the following message to the console:

```c
%d is a leap year
```

or

```c
%d is not a leap year
```

depending on whether the year is a leap year or not.

The `return 0;` statement indicates that the program has terminated successfully.

**Conclusion**

This code guide has explained how to write a program to check whether a year is a leap year or not. If you have any questions, please feel free to comment on the repository.

Thank you for reading!