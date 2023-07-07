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