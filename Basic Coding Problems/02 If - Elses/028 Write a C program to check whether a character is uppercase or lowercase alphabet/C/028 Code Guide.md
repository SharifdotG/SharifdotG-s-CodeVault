# Here is the guideline for the C program to check whether a character is uppercase or lowercase alphabet:

## Understanding the Problem

The problem is to write a C program that checks whether a character is uppercase or lowercase alphabet. The program should prompt the user to enter a character, and then check if the character is in the range of uppercase alphabets `('A' to 'Z')` or lowercase alphabets `('a' to 'z')`. If the character is in one of these ranges, the program should print a message indicating that the character is an uppercase or lowercase alphabet. Otherwise, the program should print a message indicating that the character is not an alphabet.

## Approaching the Problem

The following steps can be used to approach this problem:

1. Declare a variable to store the character that the user enters.
2. Prompt the user to enter a character.
3. Get the character from the user.
4. Check if the character is in the range of uppercase alphabets.
5. Check if the character is in the range of lowercase alphabets.
6. Print a message indicating whether the character is an uppercase or lowercase alphabet, or not an alphabet.

## Solving the Problem

The following code solves the problem:

```c
#include <stdio.h>

int main() {

  char character;

  printf("Enter a character: ");
  scanf("%c", &character);

  if (character >= 'A' && character <= 'Z') {
    printf("The character is uppercase alphabet.\n");
  } else if (character >= 'a' && character <= 'z') {
    printf("The character is lowercase alphabet.\n");
  } else {
    printf("The character is not an alphabet.\n");
  }

  return 0;
}
```

This code first declares a variable `character` to store the character that the user enters. Then, it prompts the user to enter a character and gets the character from the user. Next, it checks if the character is in the range of uppercase alphabets by using the following condition:

```c
if (character >= 'A' && character <= 'Z')
```

If the character is in the range of uppercase alphabets, the program prints a message indicating that the character is an uppercase alphabet. Otherwise, the program checks if the character is in the range of lowercase alphabets by using the following condition:

```c
else if (character >= 'a' && character <= 'z')
```

If the character is in the range of lowercase alphabets, the program prints a message indicating that the character is a lowercase alphabet. Otherwise, the program prints a message indicating that the character is not an alphabet.

## Further Questions

If you have any further questions about this problem, please feel free to comment in the repository. I will be happy to help.