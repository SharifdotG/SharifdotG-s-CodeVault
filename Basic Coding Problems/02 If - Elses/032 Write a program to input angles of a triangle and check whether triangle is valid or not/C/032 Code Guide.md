# Here is the code guide for the C program to input angles of a triangle and check whether triangle is valid or not:

## The Problem

A triangle is a three-sided polygon. The sum of the interior angles of a triangle is always equal to 180 degrees. A triangle is considered valid if the sum of its three angles is equal to 180 degrees and all three angles are greater than 0 degrees.

## Code Explanation

The code first declares three variables, `angle_a`, `angle_b`, and `angle_c`, to store the angles of the triangle. It then prompts the user to enter the values of these angles. The values are then read from the user using the `scanf()` function.

The next step is to check whether the sum of the three angles is equal to 180 degrees. If it is, then the triangle is valid. Otherwise, the triangle is not valid.

Finally, the program prints a message indicating whether the triangle is valid or not.

Here is a more detailed explanation of the code:

```c
#include <stdio.h>

int main() {
    int angle_a, angle_b, angle_c;

    printf("Enter the angles of the triangle: ");
    scanf("%d %d %d", &angle_a, &angle_b, &angle_c);

    if (angle_a + angle_b + angle_c == 180 && angle_a > 0 && angle_b > 0 && angle_c > 0) {
        printf("The triangle is valid.");
    } else {
        printf("The triangle is not valid.");
    }

    return 0;
}
```

The `#include <stdio.h>` statement tells the compiler to include the `stdio.h` header file, which contains declarations for the `printf()` and `scanf()` functions.

The `int main()` function is the main function of the program. It is where the program starts and ends.

The `printf()` function is used to print a message to the console. In this case, it is used to print a message prompting the user to enter the angles of the triangle.

The `scanf()` function is used to read values from the user. In this case, it is used to read the values of the angles of the triangle from the user.

The `if` statement is used to check whether the sum of the three angles is equal to 180 degrees. If it is, then the `printf()` function is used to print a message indicating that the triangle is valid. Otherwise, the `printf()` function is used to print a message indicating that the triangle is not valid.

The `return 0;` statement tells the compiler that the program has completed successfully.

## Conclusion

This code guide provides a detailed explanation of the C program to input angles of a triangle and check whether triangle is valid or not. If you have any questions, please feel free to comment in the repository.