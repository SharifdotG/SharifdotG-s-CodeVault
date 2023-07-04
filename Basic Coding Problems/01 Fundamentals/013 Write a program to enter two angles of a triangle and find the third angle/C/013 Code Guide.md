# Here is the Code Guide for the C program to enter two angles of a triangle and find the third angle:

**Problem**

The problem is to write a C program that can enter two angles of a triangle and find the third angle. The angles of a triangle must add up to 180 degrees, so the third angle can be found by subtracting the two known angles from 180 degrees.

**Code Explanation**

The code is as follows:

```c
#include <stdio.h>

int main() {
    int first_angle, second_angle, third_angle;

    printf("Enter the first angle: ");
    scanf("%d", &first_angle);

    printf("Enter the second angle: ");
    scanf("%d", &second_angle);

    third_angle = 180 - (first_angle + second_angle);

    printf("The third angle of the triangle is: %d\n", third_angle);

    return 0;
}
```

The first step is to declare three variables: `first_angle`, `second_angle`, and `third_angle`. These variables will be used to store the three angles of the triangle.

The next step is to prompt the user to enter the first and second angles of the triangle. This is done using the `printf()` function.

The third step is to calculate the third angle of the triangle. The third angle is equal to 180 degrees minus the sum of the first and second angles. This is calculated using the following expression:

```
third_angle = 180 - (first_angle + second_angle);
```

The fourth step is to print the third angle of the triangle to the console. This is done using the `printf()` function.

The final step is to return 0 from the main function. This indicates that the program has terminated successfully.

**Conclusion**

This Code Guide has explained how to write a C program to enter two angles of a triangle and find the third angle. The code is highly detailed and concise, so that everyone can understand it without any issues. If you have any queries, you can comment in the repository anytime.

I hope this helps! Let me know if you have any other questions.