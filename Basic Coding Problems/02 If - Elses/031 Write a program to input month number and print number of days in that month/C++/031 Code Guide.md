# Here is the code guide for the problem "Write a program to input month number and print number of days in that month":

## The Problem

The problem is to write a program that will input a month number and print the number of days in that month. The program should be able to handle all 12 months of the year.

## Code Explanation

The code for the problem is as follows:

```c++
#include <iostream>

using namespace std;

int main() {
    int month;

    cout << "Enter the month number: ";
    cin >> month;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        cout << "The number of days in this month is 31.\n";
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "The number of days in this month is 30.\n";
    } else if (month == 2) {
        cout << "The number of days in this month is 28 or 29.\n";
    } else {
        cout << "Invalid month number.\n";
    }

    return 0;
}
```

The first step in the code is to declare a variable called `month` to store the month number that the user inputs.

The next step is to use a `cout` statement to prompt the user to enter the month number. The user's input is then stored in the `month` variable.

The next step is to use an `if` statement to check the value of the `month` variable. If the value of `month` is one of the following values: 1, 3, 5, 7, 8, 10, or 12, then the program will print the following message:

```c++
The number of days in this month is 31.
```

If the value of `month` is one of the following values: 4, 6, 9, or 11, then the program will print the following message:

```c++
The number of days in this month is 30.
```

If the value of `month` is 2, then the program will print the following message:

```c++
The number of days in this month is 28 or 29.
```

Finally, if the value of `month` is not one of the values listed above, then the program will print the following message:

```c++
Invalid month number.
```

## Conclusion

This code guide has provided a detailed explanation of the code for the problem "Write a program to input month number and print number of days in that month". If you have any questions about the code, please feel free to comment on the repository.