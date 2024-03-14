#include <stdio.h>
#include <string.h>

int main() {
    char phrase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int numberOfCharacters;
    scanf("%d", &numberOfCharacters);

    for (int i = 0; i < numberOfCharacters; i++) {
        printf("%c", phrase[i]);
    }

    printf("\n");

    return 0;
}
