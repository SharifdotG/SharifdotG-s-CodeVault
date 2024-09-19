#include <stdio.h>
#include <string.h>

int main() {
    int n, l, c;
    char s[100];
    while (scanf("%d %d %d", &n, &l, &c) != EOF) {
        int lines = 1, pages = 1, words = 0;

        for (int i = 0; i < n; i++) {
            scanf("%s", s);
            if (words + strlen(s) <= c) {
                words += strlen(s) + 1;
            } else {
                lines++;
                words = strlen(s) + 1;
            }
            if (lines > l) {
                lines = 1;
                pages++;
            }
        }

        printf("%d\n", pages);
    }

    return 0;
}