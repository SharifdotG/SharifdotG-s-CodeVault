# Here is the code guide for the problem of checking whether a triangle is equilateral, isosceles, or scalene:

## Problem

A triangle is a polygon with three sides and three angles. There are three types of triangles:

* Equilateral triangle: All three sides of the triangle are equal.
* Isosceles triangle: Any two sides of the triangle are equal.
* Scalene triangle: No sides of the triangle are equal.

This program checks whether the triangle is equilateral, isosceles, or scalene by using the following steps:

1. The user enters the lengths of the three sides of the triangle.
2. The program checks if any two sides of the triangle are equal.
3. If any two sides of the triangle are equal, the program checks if all three sides of the triangle are equal.
4. If all three sides of the triangle are equal, the program prints "The triangle is equilateral."
5. If any two sides of the triangle are equal, but not all three sides, the program prints "The triangle is isosceles."
6. If no two sides of the triangle are equal, the program prints "The triangle is scalene."

## Code Explanation

The code for this program is as follows:

```c++
#include <iostream>

using namespace std;

int main() {
    int side_a, side_b, side_c;

    cout << "Enter the three sides of the triangle: ";
    cin >> side_a >> side_b >> side_c;

    if (side_a == side_b && side_b == side_c) {
        cout << "The triangle is equilateral." << endl;
    } else if (side_a == side_b || side_a == side_c || side_b == side_c) {
        cout << "The triangle is isosceles." << endl;
    } else {
        cout << "The triangle is scalene." << endl;
    }

    return 0;
}
```

The first line of code includes the `iostream` header file, which contains the definition of the `cout` object. The `using namespace std;` statement tells the compiler to use the names of the objects and functions defined in the `std` namespace without having to prefix them with `std::`.

The `main()` function is the entry point for the program. It first declares three variables to store the lengths of the three sides of the triangle. Then, it prompts the user to enter the lengths of the three sides and stores them in the variables.

Next, the `if` statement checks if all three sides of the triangle are equal. If they are, the program prints "The triangle is equilateral." Otherwise, the `if` statement checks if any two sides of the triangle are equal. If any two sides are equal, the program prints "The triangle is isosceles." Otherwise, the program prints "The triangle is scalene."

Finally, the `return 0;` statement tells the compiler that the program has finished successfully.

## Conclusion

This code guide has provided a detailed explanation of the problem of checking whether a triangle is equilateral, isosceles, or scalene and the code that solves the problem. If you have any questions about the code, please feel free to comment in the repository.

Thank you for reading!