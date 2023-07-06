# Here is the code guide for finding the maximum between three numbers:

**Problem:**

The problem is to write a program that takes three numbers as input and prints the maximum number.

**Code Explanation:**

The code is as follows:

```c
#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int max_num = num1;
    if (num2 > max_num) {
        max_num = num2;
    } if (num3 > max_num) {
        max_num = num3;
    }

    printf("%d is the maximum number\n", max_num);
    return 0;
}
```

The first step is to declare three variables, `num1`, `num2`, and `num3`, to store the three numbers. Then, the user is prompted to enter the three numbers. The `scanf()` function is used to read the three numbers from the user.

The next step is to find the maximum number. The variable `max_num` is initialized to the value of `num1`. Then, the `if` statement is used to compare `num2` to `max_num`. If `num2` is greater than `max_num`, then `max_num` is updated to the value of `num2`. The same thing is done for `num3`.

Finally, the `printf()` function is used to print the maximum number. The return value of `0` indicates that the program has terminated successfully.

**Conclusion:**

This code guide has explained how to find the maximum between three numbers. If you have any questions, please feel free to comment on the repository.

**Additional Notes:**

* The `if` statement is a conditional statement that is used to check if a condition is true. If the condition is true, then the code inside the `if` statement is executed. If the condition is false, then the code inside the `if` statement is skipped.
* The `scanf()` function is used to read input from the user. The `scanf()` function takes two arguments: the format string and the address of the variable where the input should be stored.
* The `printf()` function is used to print output to the console. The `printf()` function takes a format string and the values that should be printed.

I hope this code guide is helpful. Please let me know if you have any other questions.