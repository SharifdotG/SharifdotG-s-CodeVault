#include <stdio.h>
#include <string.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases--) {
        char player1[100], player2[100], choice1[10], choice2[10];
        int number1, number2;
        scanf("%s %s %s %s %d %d", player1, choice1, player2, choice2, &number1, &number2);

        if ((number1 + number2) % 2 == 0) {
            if (strcmp(choice1, "PAR") == 0) {
                printf("%s\n", player1);
            } else printf("%s\n", player2);
        } else {
            if (strcmp(choice1, "IMPAR") == 0) {
                printf("%s\n", player1);
            } else printf("%s\n", player2);
        }
    }

    return 0;
}
