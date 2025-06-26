#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char a[1001], b[1001];
        scanf("%s %s", a, b);

        int lenA = strlen(a);
        int lenB = strlen(b);

        if (lenA < lenB) {
            printf("nao encaixa\n");
        } else {
            if (strncmp(a + lenA - lenB, b, lenB) == 0) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }

    return 0;
}
