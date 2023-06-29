# Here is the guideline for the problem:

**Understanding the problem**

The problem asks you to write a C program that prints the total number of days in a month using switch case. The program should prompt the user to enter the month number, and then print the number of days in that month.

**Approach**

The first step is to define the variables that you will need. You will need a variable to store the month number, and a variable to store the number of days in the month.

The next step is to write the code that prompts the user to enter the month number. You can use the `printf()` function to do this.

The third step is to write the code that reads the month number from the user. You can use the `scanf()` function to do this.

The fourth step is to write the code that uses switch case to print the number of days in the month. You can use the following code as a starting point:

```c
switch (month) {
    case 1:
        printf("There are 31 days in January.\n");
        break;
    case 2:
        printf("There are 28 days in February.\n");
        break;
    // ...
    default:
        printf("Invalid month number.\n");
}
```

**Solving the problem**

The complete code for the problem is shown below:

```c
#include <stdio.h>

int main() {

    int month;

    printf("Enter the month number: ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("There are 31 days in January.\n");
            break;
        case 2:
            printf("There are 28 days in February.\n");
            break;
        case 3:
            printf("There are 31 days in March.\n");
            break;
        case 4:
            printf("There are 30 days in April.\n");
            break;
        case 5:
            printf("There are 31 days in May.\n");
            break;
        case 6:
            printf("There are 30 days in June.\n");
            break;
        case 7:
            printf("There are 31 days in July.\n");
            break;
        case 8:
            printf("There are 31 days in August.\n");
            break;
        case 9:
            printf("There are 30 days in September.\n");
            break;
        case 10:
            printf("There are 31 days in October.\n");
            break;
        case 11:
            printf("There are 30 days in November.\n");
            break;
        case 12:
            printf("There are 31 days in December.\n");
            break;
        default:
            printf("Invalid month number.\n");
    }

    return 0;
}
```

**Explaining how the code works**

The code works by first prompting the user to enter the month number. The `printf()` function is used to do this. The `scanf()` function is then used to read the month number from the user.

The `switch` statement is then used to print the number of days in the month. The `case` statements in the `switch` statement correspond to the different month numbers. The `break` statements are used to break out of the `switch` statement after the appropriate case statement has been executed.

**If you have any queries, you can comment in the repository.**

I hope this guideline is helpful. If you have any queries, please feel free to comment in the repository.