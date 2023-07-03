# Here is the guideline for the problem:

**Problem:**

Write a C program to find a maximum between three numbers using ternary operator.

**Understanding the problem:**

The problem is to find the maximum number among three numbers. The ternary operator is a conditional operator that can be used to evaluate an expression and return the appropriate value.

**Approach:**

The ternary operator can be used to find the maximum number among three numbers as follows:

```
maximum = first_number > second_number ? first_number : second_number;
```

This code first evaluates the expression `first_number > second_number`. If the expression is true, then the value of `first_number` is returned. Otherwise, the value of `second_number` is returned.

The inner ternary operator is used to compare the value of `first_number` with the value of `third_number`. If the value of `first_number` is greater than the value of `third_number`, then the value of `first_number` is returned. Otherwise, the value of `third_number` is returned.

**Solving the problem:**

The code for solving the problem is as follows:

```c
#include <stdio.h>

int main() {
    
    int first_number, second_number, third_number, maximum;

    /*
     * Prompt the user to enter the first number.
     */
    printf("Enter the first number: ");
    scanf("%d", &first_number);

    /*
     * Prompt the user to enter the second number.
     */
    printf("Enter the second number: ");
    scanf("%d", &second_number);

    /*
     * Prompt the user to enter the third number.
     */
    printf("Enter the third number: ");
    scanf("%d", &third_number);

    /*
     * Find the maximum number.
     */
    maximum = first_number > second_number ? (first_number > third_number ? first_number : third_number) : (second_number > third_number ? second_number : third_number);

    /*
     * Print the maximum value.
     */
    printf("The maximum value is: %d\n", maximum);

    return 0;
}
```

This code first prompts the user to enter the three numbers. Then, it uses the ternary operator to find the maximum number. Finally, it prints the maximum value.

**Explaining the code:**

The code for finding the maximum number is as follows:

```c
maximum = first_number > second_number ? (first_number > third_number ? first_number : third_number) : (second_number > third_number ? second_number : third_number);
```

This code first evaluates the expression `first_number > second_number`. If the expression is true, then the value of `first_number` is assigned to `maximum`. Otherwise, the value of `second_number` is assigned to `maximum`.

The inner ternary operator is then used to compare the value of `first_number` with the value of `third_number`. If the value of `first_number` is greater than the value of `third_number`, then the value of `first_number` is assigned to `maximum`. Otherwise, the value of `third_number` is assigned to `maximum`.

**Comments:**

If you have any queries, please feel free to comment in the repository. I will be happy to help you.

I hope this guideline is helpful. Let me know if you have any other questions.