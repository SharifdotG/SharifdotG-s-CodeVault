#include <stdio.h>
#include <ctype.h>

int main() {
    char character;

    printf("Enter any character: ");
    scanf("%c", &character);

    if (isalpha(character)) {
        printf("The character is an alphabet.");
    } else if (isdigit(character)) {
        printf("The character is a digit.");
    } else {
        printf("The character is a special character.");
    }

    return 0;
}