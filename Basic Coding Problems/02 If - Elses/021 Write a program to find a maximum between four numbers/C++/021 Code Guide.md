# Here is the Code Guide for the program to find a maximum between four numbers:

**Problem:**

The problem is to write a program that takes four numbers as input and outputs the maximum number.

**Code Explanation:**

The code is as follows:

```c++
#include <iostream>

using namespace std;

int main() {
    int first, second, third, fourth;

    cout << "Enter four numbers: ";
    cin >> first >> second >> third >> fourth;

    int max = first;
    if (second > max) {
        max = second;
    } if (third > max) {
        max = third;
    } if (fourth > max) {
        max = fourth;
    }

    cout << "The maximum number is: " << max << endl;

    return 0;
}
```

The first step is to declare four variables to store the four numbers. The variables are named `first`, `second`, `third`, and `fourth`.

The next step is to prompt the user to enter the four numbers. This is done using the `cout` statement.

The next step is to find the maximum number. This is done by initializing a variable `max` to the value of `first`. Then, we use a series of `if` statements to compare `max` to the other three numbers. If any of the other numbers is greater than `max`, then we update the value of `max` to the value of that number.

Finally, we print the maximum number using the `cout` statement.

**Conclusion:**

This is a simple program that can be used to find the maximum between four numbers. The code is well-commented and easy to understand. If you have any questions, please feel free to comment on the repository.

Thank you for reading!