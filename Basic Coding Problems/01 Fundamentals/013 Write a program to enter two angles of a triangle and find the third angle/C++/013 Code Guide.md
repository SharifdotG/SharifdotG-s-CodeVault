# Here is the Code Guide for the program to enter two angles of a triangle and find the third angle:

**The Problem**

The problem is to write a program that will ask the user to enter the two angles of a triangle, and then calculate and print the third angle of the triangle.

**Code Explanation**

The code for this problem is as follows:

```c++
#include <iostream>

using namespace std;

int main() {
    int first_angle, second_angle, third_angle;

    cout << "Enter the first angle: ";
    cin >> first_angle;

    cout << "Enter the second angle: ";
    cin >> second_angle;

    third_angle = 180 - (first_angle + second_angle);

    cout << "The third angle of the triangle is: " << third_angle << endl;

    return 0;
}
```

The first step in the code is to declare three variables: `first_angle`, `second_angle`, and `third_angle`. These variables will be used to store the three angles of the triangle.

The next step is to prompt the user to enter the two angles of the triangle. This is done using the following code:

```c++
cout << "Enter the first angle: ";
cin >> first_angle;

cout << "Enter the second angle: ";
cin >> second_angle;
```

The `cout` statement will print a message to the user, and the `cin` statement will read the user's input and store it in the `first_angle` and `second_angle` variables.

The next step is to calculate the third angle of the triangle. This is done using the following code:

```c++
third_angle = 180 - (first_angle + second_angle);
```

The `third_angle` variable is initialized to 180 degrees. Then, the `first_angle` and `second_angle` variables are added together, and the result is subtracted from 180 degrees. The result of this subtraction is the value of the `third_angle` variable.

The final step in the code is to print the third angle of the triangle. This is done using the following code:

```c++
cout << "The third angle of the triangle is: " << third_angle << endl;
```

The `cout` statement will print a message to the user, and the `endl` statement will insert a newline character at the end of the message.

**Conclusion**

This Code Guide has explained the problem and the code for the program to enter two angles of a triangle and find the third angle. If you have any questions, please feel free to comment in the repository.

I hope this helps! Let me know if you have any other questions.