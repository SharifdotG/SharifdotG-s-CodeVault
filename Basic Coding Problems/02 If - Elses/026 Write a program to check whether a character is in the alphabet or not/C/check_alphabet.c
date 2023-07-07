#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z') {
        printf("%c is in the alphabet.\n", character);
    } else {
        printf("%c is not in the alphabet.\n", character);
    }

    return 0;
}