# Here is the code guide for the simple interest program:

## The Problem

The problem is to write a program that calculates the simple interest for a given principal amount, time period, and interest rate.

## Code Explanation

The code for the simple interest program is as follows:

```c++
#include <iostream>

using namespace std;

int main() {
    float principal, time, rate_of_interest, simple_interest;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the time period in years: ";
    cin >> time;

    cout << "Enter the interest rate: ";
    cin >> rate_of_interest;

    simple_interest = principal * time * rate_of_interest / 100;

    cout << "The simple interest is: " << simple_interest << endl;

    return 0;
}
```

The first step is to declare the variables that will be used in the program. These variables are:

* `principal`: The principal amount.
* `time`: The time period in years.
* `rate_of_interest`: The interest rate.
* `simple_interest`: The simple interest.

The next step is to get the input from the user. This is done using the `cin` statement.

```c++
cout << "Enter the principal amount: ";
cin >> principal;

cout << "Enter the time period in years: ";
cin >> time;

cout << "Enter the interest rate: ";
cin >> rate_of_interest;
```

Once the input has been obtained, the simple interest is calculated using the following formula:

```c++
simple_interest = principal * time * rate_of_interest / 100
```

The final step is to print the simple interest. This is done using the `cout` statement.

```c++
cout << "The simple interest is: " << simple_interest << endl;
```

## Conclusion

This code guide has provided a detailed explanation of the simple interest program. If you have any questions, please feel free to comment on the repository.

Thank you for reading!