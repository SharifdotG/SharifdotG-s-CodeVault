#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char s1[1001], s2[1001];
        scanf("%s %s", s1, s2);

        int i = 0, j = 0;
        while (s1[i] != '\0' || s2[j] != '\0') {
            if (s1[i] != '\0') {
                putchar(s1[i++]);
            }
            if (s2[j] != '\0') {
                putchar(s2[j++]);
            }
        }

        putchar('\n');
    }

    return 0;
}
