#include <stdio.h>
#include <stdlib.h>

int next_permutation(int n, char **s) {
    int k, l;

    for (k = n - 2; k >= 0; k--) {
        if (strcmp(s[k], s[k + 1]) < 0)
            break;
    }

    if (k < 0)
        return 0;

    for (l = n - 1; l > k; l--) {
        if (strcmp(s[k], s[l]) < 0)
            break;
    }

    char *tmp = s[k];
    s[k] = s[l];
    s[l] = tmp;

    for (int i = k + 1, j = n - 1; i < j; i++, j--) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }

    return 1;
}

int main() {
    char **s;
    int n;
    scanf("%d", &n);

    s = calloc(n, sizeof(char *));

    for (int i = 0; i < n; i++) {
        s[i] = calloc(11, sizeof(char));
        scanf("%s", s[i]);
    }

    do {
        for (int i = 0; i < n; i++) {
            printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
        }
    } while (next_permutation(n, s));

    for (int i = 0; i < n; i++) {
        free(s[i]);
    }

    free(s);

    return 0;
}