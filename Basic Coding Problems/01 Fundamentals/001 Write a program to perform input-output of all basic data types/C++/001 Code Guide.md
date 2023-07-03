# Here is the code guide for the program to perform input-output of all basic data types:

**The Problem**

The problem is to write a program that can read and print the values of all basic data types in C++. The basic data types in C++ are:

* char
* unsigned char
* short
* int
* unsigned int
* long
* unsigned long
* long long
* unsigned long long
* float
* double
* long double

**Code Explanation**

The code to solve the problem is as follows:

```c++
#include <iostream>

using namespace std;

int main() {
    char character;
    unsigned char unsigned_character;
    short short_integer;
    int integer;
    unsigned int unsigned_integer;
    long long_integer;
    unsigned long unsigned_long;
    unsigned long long unsigned_long_long;
    float float_value;
    double double_value;
    long double long_double_value;

    cout << "Enter a character: ";
    cin >> character;

    cout << "Enter an unsigned character: ";
    cin >> unsigned_character;

    cout << "Enter a short integer: ";
    cin >> short_integer;

    cout << "Enter an integer: ";
    cin >> integer;

    cout << "Enter an unsigned integer: ";
    cin >> unsigned_integer;

    cout << "Enter a long integer: ";
    cin >> long_integer;

    cout << "Enter an unsigned long integer: ";
    cin >> unsigned_long;

    cout << "Enter an unsigned long long integer: ";
    cin >> unsigned_long_long;

    cout << "Enter a float: ";
    cin >> float_value;

    cout << "Enter a double: ";
    cin >> double_value;

    cout << "Enter a long double: ";
    cin >> long_double_value;

    cout << "\nThe character is: " << character << endl;
    cout << "The unsigned character is: " << unsigned_character << endl;
    cout << "The short integer is: " << short_integer << endl;
    cout << "The integer is: " << integer << endl;
    cout << "The unsigned integer is: " << unsigned_integer << endl;
    cout << "The long integer is: " << long_integer << endl;
    cout << "The unsigned long integer is: " << unsigned_long << endl;
    cout << "The unsigned long long integer is: " << unsigned_long_long << endl;
    cout << "The float is: " << float_value << endl;
    cout << "The double is: " << double_value << endl;
    cout << "The long double is: " << long_double_value << endl;

    return 0;
}
```

The code first declares a variable of each of the basic data types. Then, it prompts the user to enter a value for each variable. Finally, it prints the value of each variable.

The `cout` and `cin` objects are used to print and read data from the console. The `cout` object is used to print data to the console, and the `cin` object is used to read data from the console.

The `endl` manipulator is used to add a newline character to the output.

**Conclusion**

This code can be used to read and print the values of all basic data types in C++. If you have any questions about the code, please feel free to comment in the repository.