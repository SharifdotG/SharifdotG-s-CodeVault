# Here is the code guide for the program to find all roots of a quadratic equation:

## The Problem

A quadratic equation is an equation of the form `ax^2 + bx + c = 0`, where `a`, `b`, and `c` are real numbers and `a` is not equal to 0. The roots of a quadratic equation are the values of `x` that satisfy the equation.

## Code Explanation

The code to find all roots of a quadratic equation is as follows:

```c++
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;
    float discriminant, root1, root2, real_part, imaginary_part;

    cout << "Enter the value of a, b, c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are: " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        cout << "The roots are: " << root1 << " and " << root2 << endl;
    } else {
        real_part = -b / (2 * a);
        imaginary_part = sqrt(-discriminant) / (2 * a);
        cout << "The roots are: " << real_part << " + " << imaginary_part << "i and " << real_part << " - " << imaginary_part << "i" << endl;
    }

    return 0;
}
```

The first few lines of code declare the variables that will be used in the program. The variables `a`, `b`, and `c` are the coefficients of the quadratic equation, and `root1`, `root2`, `real_part`, and `imaginary_part` are the roots of the equation.

The next line of code prompts the user to enter the values of `a`, `b`, and `c`. The values are then stored in the corresponding variables.

The next line of code calculates the discriminant of the quadratic equation. The discriminant is a value that determines the nature of the roots of the equation. If the discriminant is positive, then the roots of the equation are real and different. If the discriminant is equal to 0, then the roots of the equation are real and equal. If the discriminant is negative, then the roots of the equation are complex and different.

The next few lines of code check the value of the discriminant and print the corresponding roots of the equation. If the discriminant is positive, then the roots of the equation are calculated using the following formula:

```c++
root1 = (-b + sqrt(discriminant)) / (2 * a);
root2 = (-b - sqrt(discriminant)) / (2 * a);
```

If the discriminant is equal to 0, then the roots of the equation are both equal to:

```c++
root1 = root2 = -b / (2 * a);
```

If the discriminant is negative, then the roots of the equation are complex and are calculated using the following formula:

```c++
real_part = -b / (2 * a);
imaginary_part = sqrt(-discriminant) / (2 * a);
```

The final line of code returns 0 to indicate that the program has terminated successfully.

## Conclusion

This code guide provides a detailed explanation of the program to find all roots of a quadratic equation. If you have any questions about the code, please feel free to comment in the repository.