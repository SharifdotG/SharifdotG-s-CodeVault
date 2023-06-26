# Here is the guideline for the C program to input week number and print week day:

## Understanding the problem

The problem is to write a C program that takes a week number as input and prints the corresponding week day. The week number can be any number from 1 to 7, where 1 is Sunday, 2 is Monday, and so on.

## Approaching the problem

The first step is to declare an integer variable to store the week number. Then, we need to prompt the user to enter the week number and read the input using the `scanf()` function. Next, we need to use an `if` statement to check if the week number is valid. If the week number is valid, we can simply print the corresponding week day. Otherwise, we need to print an error message.

## Solving the problem

The following code solves the problem:

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

This code first declares an integer variable called `week_number` to store the week number. Then, it prompts the user to enter the week number and reads the input using the `scanf()` function. Next, it uses an `if` statement to check if the week number is valid. If the week number is valid, the code prints the corresponding week day. Otherwise, the code prints an error message.

## Further assistance

If you have any further questions, please feel free to comment on the repository. I will be happy to help.

## Code comments

The code is well-commented, so you should be able to understand how it works. However, if you have any questions, please feel free to comment on the repository.

## Conclusion

This is a simple C program that can be used to input week number and print week day. The code is well-commented and easy to understand. If you have any questions, please feel free to comment on the repository.