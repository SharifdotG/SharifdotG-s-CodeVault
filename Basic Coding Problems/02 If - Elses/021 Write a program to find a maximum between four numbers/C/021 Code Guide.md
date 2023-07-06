# Here is the Code Guide for the program to find a maximum between four numbers:

**The Problem**

The problem is to write a program that takes four numbers as input and outputs the maximum number.

**Code Explanation**

The code is as follows:

```c
#include <stdio.h>

int main() {
    int first, second, third, fourth;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);

    int max = first;
    if (second > max) {
        max = second;
    } if (third > max) {
        max = third;
    } if (fourth > max) {
        max = fourth;
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
```

The first step is to declare four variables to store the four numbers. The variables are named `first`, `second`, `third`, and `fourth`.

The next step is to prompt the user to enter the four numbers. This is done using the `printf()` function. The `scanf()` function is used to read the four numbers from the user.

The next step is to find the maximum number. This is done by initializing a variable `max` to the value of `first`. Then, we use the `if` statement to compare the value of `max` with the values of `second`, `third`, and `fourth`. If the value of any of these variables is greater than the value of `max`, then the value of `max` is updated to the value of that variable.

Finally, we use the `printf()` function to print the maximum number.

**Conclusion**

This code can be used to find the maximum number between four numbers. If you have any questions, please feel free to comment in the repository.

I hope this helps! Let me know if you have any other questions.