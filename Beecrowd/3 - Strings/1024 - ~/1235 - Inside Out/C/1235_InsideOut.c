#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    while (n--) {
        char s[1001];
        fgets(s, 1001, stdin);

        s[strcspn(s, "\n")] = '\0';

        int len = strlen(s);

        reverse(s, s + len / 2 - 1);
        reverse(s + len / 2, s + len - 1);

        printf("%s\n", s);
    }

    return 0;
}
