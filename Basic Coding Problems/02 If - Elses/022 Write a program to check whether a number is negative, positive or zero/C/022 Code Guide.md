# Here is the Code Guide for the problem of checking whether a number is negative, positive, or zero:

**The Problem**

The problem is to write a program that checks whether a number is negative, positive, or zero. The program should first prompt the user to enter a number. Then, the program should use an if-else statement to check the sign of the number. If the number is greater than zero, the program should print the message "The number is positive." If the number is less than zero, the program should print the message "The number is negative." If the number is equal to zero, the program should print the message "The number is zero."

**Code Explanation**

The code for this problem is as follows:

```c
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
```

The first line of code includes the `stdio.h` header file, which contains the function `printf()`. The second line of code declares the `number` variable, which will store the number entered by the user. The third line of code prompts the user to enter a number. The fourth line of code uses the `scanf()` function to read the number entered by the user and store it in the `number` variable.

The next three lines of code use an if-else statement to check the sign of the `number` variable. If the `number` variable is greater than zero, the first `if` statement will be executed. This statement will print the message "The number is positive." If the `number` variable is less than zero, the second `if` statement will be executed. This statement will print the message "The number is negative." If the `number` variable is equal to zero, the else statement will be executed. This statement will print the message "The number is zero."

The last line of code returns the value 0 from the `main()` function. This indicates that the program has terminated successfully.

**Conclusion**

This Code Guide has explained how the program works in detail. If you have any questions about the code, please feel free to comment in the repository.

Thank you for reading!