# Here is the code guide for the problem "Write a program to input any alphabet and check whether it is vowel or consonant."

## Problem

The problem is to write a program that will input any alphabet from the user and check whether it is a vowel or a consonant. The program should then print the appropriate message to the user.

## Code Explanation

The code for the problem is as follows:

```c++
#include <iostream>

using namespace std;

int main() {
    char letter;

    cout << "Enter any alphabet: ";
    cin >> letter;

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
        cout << "The alphabet is a vowel.\n";
    } else {
        cout << "The alphabet is a consonant.\n";
    }

    return 0;
}
```

The first step in the code is to declare a variable named `letter` of type `char`. This variable will store the alphabet that the user enters.

The next step is to prompt the user to enter an alphabet and store their input in the `letter` variable. This is done using the following code:

```c++
cout << "Enter any alphabet: ";
cin >> letter;
```

The next step is to check whether the `letter` variable is a vowel. This is done using the following code:

```c++
if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
```

This code checks whether the `letter` variable is equal to any of the 10 lowercase or uppercase vowels. If it is, then the program prints a message saying that the alphabet is a vowel. Otherwise, the program prints a message saying that the alphabet is a consonant.

The final step in the code is to return a value of 0 to indicate that the program completed successfully.

## Conclusion

This code guide has provided a detailed explanation of the code for the problem "Write a program to input any alphabet and check whether it is vowel or consonant." If you have any questions about the code, please feel free to comment on the repository.

Thank you for reading!