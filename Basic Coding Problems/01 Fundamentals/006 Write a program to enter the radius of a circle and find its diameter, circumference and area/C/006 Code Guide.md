# Here is the Code Guide for the program to enter the radius of a circle and find its diameter, circumference and area:

## The Problem

The problem is to write a program that will allow the user to enter the radius of a circle and then calculate and print the diameter, circumference and area of the circle.

## Code Explanation

The code for this problem is as follows:

```c
#include <stdio.h>

int main() {
    int radius;
    float diameter, circumference, area;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    printf("The diameter of the circle is: %f\n", diameter);
    printf("The circumference of the circle is: %f\n", circumference);
    printf("The area of the circle is: %f\n", area);

    return 0;
}
```

The first line of code, `#include <stdio.h>`, tells the compiler to include the standard input/output header file. This header file contains declarations for functions such as `printf()` and `scanf()`, which are used to read and write data from the console.

The next line of code, `int main()`, defines the main function. This is the function that is executed when the program starts.

The next few lines of code, `printf("Enter the radius of the circle: ");` and `scanf("%d", &radius);`, are used to get the radius of the circle from the user. The `printf()` function displays a message on the console, and the `scanf()` function reads an integer from the console and stores it in the variable `radius`.

The next few lines of code, `diameter = 2 * radius;`, `circumference = 2 * 3.14 * radius;`, and `area = 3.14 * radius * radius;`, calculate the diameter, circumference and area of the circle. The value of pi (π) is hard-coded as 3.14, but you can also use the `M_PI` constant from the `math.h` header file.

The last few lines of code, `printf("The diameter of the circle is: %f\n", diameter);`, `printf("The circumference of the circle is: %f\n", circumference);`, and `printf("The area of the circle is: %f\n", area);`, print the diameter, circumference and area of the circle on the console.

## Conclusion

This Code Guide has explained the problem and the code for a program to enter the radius of a circle and find its diameter, circumference and area. I hope this guide has been helpful. If you have any questions, please feel free to comment on the repository.

Thank you for reading!