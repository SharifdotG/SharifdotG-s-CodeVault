# Here is the code guide for the problem "Write a program to check whether a number is negative, positive or zero":

## The Problem

The problem is to write a program that takes a number as input and prints whether the number is positive, negative, or zero.

## Code Explanation

The code is as follows:

```c++
#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive.\n";
    } else if (number < 0) {
        cout << "The number is negative.\n";
    } else {
        cout << "The number is zero.\n";
    }

    return 0;
}
```

The first line, `#include <iostream>`, tells the compiler to include the `iostream` header file. This header file contains the definition of the `cout` object, which is used to print output to the console.

The next line, `using namespace std;`, tells the compiler to use the `std` namespace. This namespace contains all of the standard C++ library functions, including `cout`.

The next line, `int main()`, declares the `main()` function. This is the entry point for all C++ programs.

The next line, `cout << "Enter a number: ";`, prints a message to the console asking the user to enter a number.

The next line, `cin >> number;`, reads the number entered by the user and stores it in the variable `number`.

The next three lines, `if (number > 0) {`, `cout << "The number is positive.\n";`, and `} else if (number < 0) {`, `cout << "The number is negative.\n";`, check if the number is positive or negative. If the number is positive, the `cout` object is used to print the message "The number is positive." If the number is negative, the `cout` object is used to print the message "The number is negative."

The last line, `else {`, `cout << "The number is zero.\n";`, `}`, checks if the number is zero. If the number is zero, the `cout` object is used to print the message "The number is zero."

## Conclusion

This code guide has explained the problem and the code in detail. If you have any questions, please feel free to comment on the repository.

Thank you for reading!