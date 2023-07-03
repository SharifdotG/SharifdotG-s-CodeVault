# Here is the guideline for the C program to check whether an alphabet is vowel or consonant using switch case:

## Understanding the problem

The problem is to write a C program that takes an alphabet as input and prints whether it is a vowel or a consonant. The program should use the switch case statement to check the letter.

## Approaching the problem

The first step is to define the variables that will be used in the program. The following variables are needed:

* `letter`: This variable will store the alphabet that is entered by the user.

The next step is to write the code that prompts the user to enter an alphabet and then stores the input in the `letter` variable. The following code can be used to do this:

```c
printf("Enter an alphabet: ");
scanf("%c", &letter);
```

The next step is to write the code that checks if the letter is a vowel. The following code can be used to do this:

```c
switch (letter) {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a vowel.\n", letter);
        break;
    default:
        printf("%c is a consonant.\n", letter);
}
```

The `switch` statement checks the value of the `letter` variable and prints the appropriate message if the letter is a vowel or a consonant.

The final step is to return 0 to indicate that the program has executed successfully.

## How the code works

The code works by first prompting the user to enter an alphabet. The input is then stored in the `letter` variable. The `switch` statement then checks the value of the `letter` variable and prints the appropriate message if the letter is a vowel or a consonant.

## Questions

If you have any questions about the code, please feel free to comment in the repository. I will be happy to answer your questions.

## Code

The complete code for the program is shown below:

```c
#include <stdio.h>

int main() {

    char letter;

    printf("Enter an alphabet: ");
    scanf("%c", &letter);

    switch (letter) {

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", letter);
            break;
        default:
            printf("%c is a consonant.\n", letter);
    }

    return 0;
}
```

I hope this helps!