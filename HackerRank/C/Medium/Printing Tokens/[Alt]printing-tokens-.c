#include <stdio.h>

int main() {
    char s[1000];
    scanf("%[^\n]", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            printf("\n");
        } else {
            printf("%c", s[i]);
        }
    }

    return 0;
}