# Here is the code guide for the program to find all roots of a quadratic equation:

## The Problem

A quadratic equation is an equation of the form

```c
ax^2 + bx + c = 0
```

where `a`, `b`, and `c` are real numbers. The roots of a quadratic equation are the values of `x` that make the equation equal to zero.

## Code Explanation

The code to find all roots of a quadratic equation is as follows:

```c
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float discriminant, root1, root2, real_part, imaginary_part;

    printf("Enter the value of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / 2 * a;
        root2 = (-b - sqrt(discriminant)) / 2 * a;
        printf("The roots are: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / 2 * a;
        printf("The roots are: %.2f and %.2f\n", root1, root2);
    } else {
        real_part = -b / 2 * a;
        imaginary_part = sqrt(-discriminant) / 2 * a;
        printf("The roots are: %.2f + %.2fi and %.2f - %.2fi\n", real_part, imaginary_part, real_part, imaginary_part);
    }

    return 0;
}
```

The first step in the code is to declare the variables that will be used. These variables are `a`, `b`, `c`, `discriminant`, `root1`, `root2`, `real_part`, and `imaginary_part`.

The next step is to prompt the user to enter the values of `a`, `b`, and `c`. The values are then stored in the corresponding variables.

The next step is to calculate the discriminant, which is defined as `b^2 - 4ac`. The discriminant determines the nature of the roots of the quadratic equation. If the discriminant is positive, then the roots are real and distinct. If the discriminant is equal to zero, then the roots are real and equal. If the discriminant is negative, then the roots are imaginary and distinct.

The next step is to use the discriminant to determine the roots of the quadratic equation. If the discriminant is positive, then the roots are calculated using the following formulas:

```c
root1 = (-b + sqrt(discriminant)) / 2 * a
root2 = (-b - sqrt(discriminant)) / 2 * a
```

If the discriminant is equal to zero, then the roots are both equal to `-b / 2 * a`.

If the discriminant is negative, then the roots are calculated using the following formulas:

```c
real_part = -b / 2 * a
imaginary_part = sqrt(-discriminant) / 2 * a
```

The final step is to print the roots of the quadratic equation. The roots are printed in the format `x1, x2`.

## Conclusion

This code guide has provided a detailed explanation of the code to find all roots of a quadratic equation. If you have any questions, please feel free to comment on the repository.