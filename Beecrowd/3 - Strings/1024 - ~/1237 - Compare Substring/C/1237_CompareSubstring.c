#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];

    while (1) {
        if (fgets(s1, sizeof(s1), stdin) == NULL ||
            fgets(s2, sizeof(s2), stdin) == NULL) {
            break;
        }

        s1[strcspn(s1, "\n")] = '\0';
        s2[strcspn(s2, "\n")] = '\0';

        int count = 0;
        for (int i = 0; i < strlen(s1); i++) {
            for (int j = 0; j < strlen(s2); j++) {
                if (s1[i] == s2[j]) {
                    int k = 0;
                    while (i + k < strlen(s1) && j + k < strlen(s2) &&
                           s1[i + k] == s2[j + k]) {
                        k++;
                    }

                    if (k > count) {
                        count = k;
                    }
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
