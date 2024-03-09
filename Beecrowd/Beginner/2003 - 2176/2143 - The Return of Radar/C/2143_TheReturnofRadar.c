#include <stdio.h>

int main() {
    int testCases;

    while (scanf("%d", &testCases) == 1) {
        if (testCases == 0) break;

        while (testCases--) {
            int people;
            scanf("%d", &people);

            if (people % 2 == 0) {
                printf("%d\n", (people - 2) * 2 + 2);
            } else printf("%d\n", (people - 1) * 2 + 1);
        }
    }

    return 0;
}
