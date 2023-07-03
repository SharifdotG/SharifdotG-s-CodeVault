# Here is the guideline for the C program to check whether a number is even or odd using switch case:

**Understanding the problem**

The problem is to write a C program that checks whether a number is even or odd. The program should take an integer as input and print "The number is even" if the number is even, or "The number is odd" if the number is odd.

**Approaching the problem**

The first step is to define a `variable` to store the number that the user enters. Then, we need to use the `modulus operator (%)` to check whether the number is `even or odd`. The modulus operator returns the `remainder` when a number is divided by another number. If the remainder is `0`, then the number is `even`. If the remainder is `1`, then the number is `odd`.

Once we know whether the number is even or odd, we can use a switch case statement to print the appropriate message. The switch case statement is a control flow statement that allows us to execute different blocks of code based on the value of a variable. In this case, the variable is the remainder of the number divided by 2.

**Solving the problem**

The code below solves the problem:

```c
#include <stdio.h>

int main() {

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number % 2) {

        case 0:
            printf("The number is even.");
            break;

        case 1:
            printf("The number is odd.");
            break;

        default:
            printf("Invalid input.");
    }

    return 0;
}
```

The code first defines a variable called `number` to store the number that the user enters. Then, it uses the `printf()` function to prompt the user to enter a number. The `scanf()` function is used to read the number from the user.

The `switch case` statement is used to check whether the number is even or odd. The remainder of the number divided by 2 is used as the value of the switch statement. The `case` statements specify the different values of the remainder and the corresponding messages that should be printed. The `break` statements are used to exit the `switch case` statement after the appropriate message has been printed.

The `default` case is used to handle invalid inputs. In this case, the message "Invalid input" is printed if the user enters a non-integer value.

**Explaining how the code works**

The code works by first reading the number from the user. Then, it uses the modulus operator (%) to check whether the number is even or odd. If the remainder is 0, then the number is even. If the remainder is 1, then the number is odd.

The `switch case` statement is then used to print the appropriate message. The `case` statements specify the different values of the remainder and the corresponding messages that should be printed. The `break` statements are used to exit the `switch case` statement after the appropriate message has been printed.

The `default` case is used to handle invalid inputs. In this case, the message "Invalid input" is printed if the user enters a non-integer value.

**Questions**

If you have any questions about the code, please feel free to comment in the repository.