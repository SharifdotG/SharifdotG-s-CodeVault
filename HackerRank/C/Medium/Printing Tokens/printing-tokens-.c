#include <stdio.h>

int main() {
    char *s;
    s = (char *)malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = (char *)realloc(s, strlen(s) + 1);

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            printf("\n");
        } else {
            printf("%c", s[i]);
        }
    }

    return 0;
}