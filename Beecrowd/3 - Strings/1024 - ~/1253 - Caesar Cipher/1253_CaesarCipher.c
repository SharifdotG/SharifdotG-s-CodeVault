#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char s[1001];
        int k;
        scanf("%s %d", s, &k);

        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            s[i] = (s[i] - k) < 'A' ? s[i] - k + 26 : s[i] - k;
        }

        printf("%s\n", s);
    }

    return 0;
}
