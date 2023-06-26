# Here is the guideline for the C program to input any alphabet and check whether it is vowel or consonant:

**Understanding the problem**

The problem is to write a C program that will:

1. Prompt the user to enter an alphabet.
2. Check whether the alphabet entered by the user is a vowel or a consonant.
3. Print a message indicating whether the alphabet is a vowel or a consonant.

**Approaching the problem**

The problem can be solved by the following steps:

1. Declare a variable to store the alphabet entered by the user.
2. Prompt the user to enter an alphabet.
3. Read the alphabet entered by the user and store it in the variable declared in step 1.
4. Check whether the alphabet is a vowel.
5. If the alphabet is a vowel, print a message indicating that the alphabet is a vowel.
6. Otherwise, print a message indicating that the alphabet is a consonant.

**Solving the problem**

The following code solves the problem:

```c
#include <stdio.h>

int main() {

  char letter;

  printf("Enter any alphabet: ");
  scanf("%c", &letter);

  if (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U') {

    printf("The alphabet is a vowel.\n");

  } else {

    printf("The alphabet is a consonant.\n");
  }

  return 0;
}
```

**Explaining the code**

The code first declares a variable `letter` to store the alphabet entered by the user. Then, it prompts the user to enter an alphabet. The `scanf()` function is used to read the alphabet entered by the user and store it in the `letter` variable.

The next step is to check whether the alphabet is a vowel. The `if` statement checks whether the `letter` variable is equal to any of the lowercase or uppercase vowels. If it is, the `if` statement prints a message indicating that the alphabet is a vowel. Otherwise, the `if` statement is skipped and the `else` statement is executed. The `else` statement prints a message indicating that the alphabet is a consonant.

Finally, the `return` statement returns the value 0 to indicate that the program has terminated successfully.

**Questions and comments**

If you have any questions or comments about the code, please feel free to post them in the repository. I will be happy to help.

Thank you for your interest in my code!