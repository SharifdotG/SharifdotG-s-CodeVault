# Here is the code guide for the C program to enter the base and height of a triangle and find its area:

**The Problem**

The problem is to write a program that allows the user to enter the base and height of a triangle, and then calculates and prints the area of the triangle.

The area of a triangle is defined as (1/2) * base * height.

**Code Explanation**

The code for this problem is as follows:

```c
#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
```

The first step in the code is to declare the variables that will be used. These variables are `base`, `height`, and `area`. The `base` and `height` variables will store the values of the base and height of the triangle, respectively. The `area` variable will store the calculated area of the triangle.

The next step in the code is to prompt the user to enter the base and height of the triangle. This is done using the `printf()` function. The `scanf()` function is then used to read the user's input and store it in the `base` and `height` variables.

The next step in the code is to calculate the area of the triangle. This is done using the following formula:

```c
area = 0.5 * base * height
```

The `0.5` coefficient is used because the area of a triangle is equal to half the product of the base and height.

The final step in the code is to print the calculated area of the triangle. This is done using the `printf()` function.

**Conclusion**

This code guide has explained the problem and the code for a C program that allows the user to enter the base and height of a triangle, and then calculates and prints the area of the triangle. If you have any questions about the code, please feel free to comment in the repository.

Thank you for reading!