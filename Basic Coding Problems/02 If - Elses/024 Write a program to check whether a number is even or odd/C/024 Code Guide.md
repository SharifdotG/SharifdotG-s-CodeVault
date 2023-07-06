# Here is the Code Guide for the program to check whether a number is even or odd:

**Problem:**

The problem is to write a program that checks whether a number is even or odd.

**Code Explanation:**

The code is as follows:

```c
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
```

The first line includes the `stdio.h` header file, which contains the `printf()` and `scanf()` functions.

The next line declares the `number` variable, which will store the number that the user enters.

The third line prompts the user to enter a number.

The fourth line uses the `scanf()` function to read the number that the user enters.

The fifth line uses the `if` statement to check whether the number is even. If the number is even, the `printf()` function will print the message "number is even". Otherwise, the `printf()` function will print the message "number is odd".

The last line returns the value 0 to indicate that the program has terminated successfully.

**Conclusion:**

This code can be used to check whether a number is even or odd. If you have any questions, please feel free to comment on the repository.

I hope this Code Guide is helpful. Let me know if you have any other questions.