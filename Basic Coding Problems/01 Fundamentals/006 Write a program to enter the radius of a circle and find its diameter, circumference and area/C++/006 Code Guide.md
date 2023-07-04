# Here is the Code Guide for the program to enter the radius of a circle and find its diameter, circumference and area:

## The Problem

The problem is to write a program that will:

1. Prompt the user to enter the radius of a circle.
2. Calculate the diameter, circumference and area of the circle.
3. Display the results to the user.

## Code Explanation

The code for this program is as follows:

```c++
#include <iostream>

using namespace std;

int main()
{
    int radius;
    float diameter, circumference, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    cout << "The diameter of the circle is: " << diameter << endl;
    cout << "The circumference of the circle is: " << circumference << endl;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}
```

The first line of code, `#include <iostream>`, tells the compiler to include the `iostream` header file. This header file contains the definition of the `cout` object, which is used to output text to the console.

The next line of code, `using namespace std;`, tells the compiler to use the `std` namespace. This namespace contains all of the standard C++ library functions, including `cin` and `cout`.

The `main()` function is the entry point for the program. It is where the program starts executing.

The first statement in the `main()` function, `cout << "Enter the radius of the circle: ";`, prompts the user to enter the radius of the circle. The `cin >> radius` statement then reads the user's input into the `radius` variable.

The next three statements, `diameter = 2 * radius;`, `circumference = 2 * 3.14 * radius;` and `area = 3.14 * radius * radius;`, calculate the diameter, circumference and area of the circle.

The final three statements, `cout << "The diameter of the circle is: " << diameter << endl;`, `cout << "The circumference of the circle is: " << circumference << endl;` and `cout << "The area of the circle is: " << area << endl;`, display the results to the user.

## Conclusion

This code guide has explained the problem and the code for a program that will calculate the diameter, circumference and area of a circle. If you have any questions, please feel free to comment in the repository.

Thank you for your time!