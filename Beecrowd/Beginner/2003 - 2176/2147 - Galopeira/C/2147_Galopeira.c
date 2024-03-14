#include <stdio.h>
#include <string.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    char word[10001];

    while (testCases--) {
        scanf("%s", word);

        printf("%.2lf\n", (double)strlen(word) * 0.01);
    }

    return 0;
}
