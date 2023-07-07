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