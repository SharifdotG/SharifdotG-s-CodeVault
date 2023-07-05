# Here is the Code Guide for the C++ program to enter marks of five subjects and calculate total, average and percentage:

**The Problem**

The problem is to write a program that will read the marks of five subjects from the user and then calculate the total, average and percentage of the marks.

**Code Explanation**

The code is as follows:

```c++
#include <iostream>

using namespace std;

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    int total;
    float average;
    float percentage;

    cout << "Enter the marks of the subjects: ";
    cin >> subject1 >> subject2 >> subject3 >> subject4 >> subject5;

    total = subject1 + subject2 + subject3 + subject4 + subject5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    cout << "The total marks of the subjects is: " << total << endl;
    cout << "The average marks of the subjects is: " << average << endl;
    cout << "The percentage of the total marks of the subjects is: " << percentage << "%" << endl;

    return 0;
}
```

The first step is to declare the variables that will be used in the program. The variables are `subject1`, `subject2`, `subject3`, `subject4`, `subject5`, `total`, `average` and `percentage`.

The next step is to read the marks of the five subjects from the user. This is done using the `cin` object.

The next step is to calculate the total, average and percentage of the marks. The total is calculated by adding the marks of the five subjects together. The average is calculated by dividing the total marks by 5. The percentage is calculated by multiplying the total marks by 100 and then dividing by 500.

The final step is to print the total, average and percentage of the marks to the console. This is done using the `cout` object.

**Conclusion**

This Code Guide has explained the problem, the code and how everything works. If you have any questions, please feel free to comment in the repository.

Thank you for reading!