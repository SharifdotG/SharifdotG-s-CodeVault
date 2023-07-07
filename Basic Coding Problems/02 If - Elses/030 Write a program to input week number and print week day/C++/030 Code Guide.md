# Here is the code guide for the program to input week number and print week day:

## The Problem

The problem is to write a program that takes a week number as input and prints the corresponding weekday. For example, if the user enters 1, the program should print "Sunday". If the user enters 7, the program should print "Saturday".

## Code Explanation

The code is as follows:

```c++
#include <iostream>

using namespace std;

int main() {
    int week_number;

    cout << "Enter week number (1-7): ";
    cin >> week_number;

    if (week_number == 1) {
        cout << "Sunday";
    } else if (week_number == 2) {
        cout << "Monday";
    } else if (week_number == 3) {
        cout << "Tuesday";
    } else if (week_number == 4) {
        cout << "Wednesday";
    } else if (week_number == 5) {
        cout << "Thursday";
    } else if (week_number == 6) {
        cout << "Friday";
    } else if (week_number == 7) {
        cout << "Saturday";
    } else {
        cout << "Invalid Input";
    }

    return 0;
}
```

The first line of code includes the `iostream` header file, which provides the `cout` and `cin` objects used to print and read data from the console.

The second line uses the `using namespace std` directive to bring all the names from the `std` namespace into the current scope. This saves us from having to write `std::cout` and `std::cin` every time we want to use those objects.

The `main()` function is the entry point for the program. It first declares a variable `week_number` of type `int` to store the week number entered by the user.

Next, it uses the `cout` object to print a message asking the user to enter the week number. It then uses the `cin` object to read the week number from the console.

The `if` statement checks if the value of `week_number` is between 1 and 7. If it is, the corresponding weekday is printed to the console. Otherwise, the message "Invalid Input" is printed.

The `return 0;` statement at the end of the `main()` function indicates that the program has completed successfully.

## Conclusion

This code guide has explained the problem, the code, and how it works in detail. If you have any questions, please feel free to comment in the repository.