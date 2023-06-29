# Here is a detailed guideline for the problem:

**Understanding the Problem**

The problem is to write a C program that creates a simple calculator using switch case. The calculator should be able to perform basic arithmetic operations, such as `addition`, `subtraction`, `multiplication`, and `division`. The user will enter the two numbers to be operated on, as well as the operator. The program will then perform the appropriate calculation and print the result.

**Approaching the Problem**

The first step is to define the variables that will be used in the program. These variables will store the two numbers to be operated on, as well as the operator. The next step is to write the code that prompts the user to enter the two numbers and the operator. The code should then use a switch case statement to perform the appropriate calculation based on the operator. Finally, the code should print the result of the calculation.

**Solving the Problem**

The code that solves the problem is shown below:

```c
#include <stdio.h>

int main() {

    int first_number;
    int second_number;
    char operator;

    printf("Enter the first number: ");
    scanf("%d", &first_number);

    printf("Enter the second number: ");
    scanf("%d", &second_number);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    switch (operator) {

        case '+':
            printf("The sum is: %d\n", first_number + second_number);
            break;

        case '-':
            printf("The difference is: %d\n", first_number - second_number);
            break;

        case '*':
            printf("The product is: %d\n", first_number * second_number);
            break;

        case '/':
            printf("The quotient is: %d\n", first_number / second_number);
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
```

This code first defines the variables that will be used in the program. Then, it prompts the user to enter the two numbers and the operator. The code then uses a switch case statement to perform the appropriate calculation based on the operator. Finally, the code prints the result of the calculation.

**Explaining How the Code Works**

The switch case statement works by comparing the value of the operator variable to a series of constants. If the value of the operator variable matches one of the constants, then the code that is associated with that constant is executed. If the value of the operator variable does not match any of the constants, then the default case is executed.

In this case, the switch case statement has four cases:

* Case `+`: This case executes the code that prints the `sum` of the two numbers.
* Case `-`: This case executes the code that prints the `difference` of the two numbers.
* Case `*`: This case executes the code that prints the `product` of the two numbers.
* Case `/`: This case executes the code that prints the `quotient` of the two numbers.

If the user enters an operator that is not one of these four, then the default case is executed, which prints an `error` message.

**Conclusion**

This is a simple calculator program that can be used to perform basic arithmetic operations. The program uses a switch case statement to perform the appropriate calculation based on the operator that is entered by the user. The code is well-documented and easy to understand.

If you have any queries about the program, please feel free to comment in the repository.