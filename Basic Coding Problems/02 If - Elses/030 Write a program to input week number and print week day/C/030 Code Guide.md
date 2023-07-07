# Here is the code guide for the problem "Write a program to input week number and print week day":

## The Problem

The problem is to write a program that will input a week number and print the corresponding day of the week. The week number can be any integer between 1 and 7, where 1 is Sunday, 2 is Monday, and so on.

## Code Explanation

The code for this problem is as follows:

```c
#include <stdio.h>

int main() {
    int week_number;

    printf("Enter week number (1-7): ");
    scanf("%d", &week_number);

    if (week_number == 1) {
        printf("Sunday");
    } else if (week_number == 2) {
        printf("Monday");
    } else if (week_number == 3) {
        printf("Tuesday");
    } else if (week_number == 4) {
        printf("Wednesday");
    } else if (week_number == 5) {
        printf("Thursday");
    } else if (week_number == 6) {
        printf("Friday");
    } else if (week_number == 7) {
        printf("Saturday");
    } else {
        printf("Invalid Input");
    }

    return 0;
}
```

The first line of code includes the `stdio.h` header file, which contains the declarations for the `printf()` and `scanf()` functions.

The next line of code declares the `week_number` variable, which will store the week number entered by the user.

The next few lines of code prompt the user to enter the week number and then read the value into the `week_number` variable.

The next block of code uses an `if...else if...else` statement to check the value of the `week_number` variable and print the corresponding day of the week. If the value of `week_number` is 1, the program prints "Sunday". If the value of `week_number` is 2, the program prints "Monday", and so on. If the value of `week_number` is not between 1 and 7, the program prints "Invalid Input".

The last line of code returns 0 to indicate that the program has completed successfully.

## Conclusion

This code guide provides a detailed explanation of the code for the problem "Write a program to input week number and print week day". If you have any questions about the code, please feel free to comment on the repository.

Thank you for reading!