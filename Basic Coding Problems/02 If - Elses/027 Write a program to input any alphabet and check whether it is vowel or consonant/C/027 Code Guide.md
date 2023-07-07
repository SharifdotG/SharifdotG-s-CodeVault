# Here is the code guide for the problem "Write a program to input any alphabet and check whether it is vowel or consonant."

## Problem

The problem is to write a program that will accept an alphabet as input and then check whether it is a vowel or a consonant.

## Code Explanation

The code for this problem is as follows:

```c
#include <stdio.h>

int main() {
    char letter;

    printf("Enter any alphabet: ");
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
        printf("The alphabet is a vowel.\n");
    } else {
        printf("The alphabet is a consonant.\n");
    }

    return 0;
}
```

The first line of code includes the `stdio.h` header file, which contains the definition of the `printf()` and `scanf()` functions.

The next line of code declares a variable named `letter` of type `char`. This variable will store the alphabet that the user enters.

The third line of code prints a message to the user asking them to enter an alphabet.

The fourth line of code uses the `scanf()` function to read the user's input and store it in the `letter` variable.

The fifth line of code uses an `if` statement to check whether the value of the `letter` variable is equal to any of the 10 lowercase or uppercase vowels. If it is, then the program prints a message saying that the alphabet is a vowel. Otherwise, the program prints a message saying that the alphabet is a consonant.

The sixth line of code returns the value 0, which indicates that the program has completed successfully.

## Conclusion

This code guide has explained the problem and the code in detail. If you have any questions, please feel free to comment in the repository.