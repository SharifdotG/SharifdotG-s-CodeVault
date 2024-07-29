#include <stdio.h>
#include <string.h>

int main() {
    char d;
    char n[101];

    while (scanf(" %c %s", &d, n) == 2 && (d != '0' || strcmp(n, "0") != 0)) {
        int len = strlen(n);
        int j = 0;

        for (int i = 0; i < len; i++) {
            if (n[i] != d) {
                n[j++] = n[i];
            }
        }
        n[j] = '\0';

        int start = 0;
        while (start < j && n[start] == '0') {
            start++;
        }
        if (start == j) {
            printf("0\n");
        } else {
            printf("%s\n", n + start);
        }
    }

    return 0;
}
