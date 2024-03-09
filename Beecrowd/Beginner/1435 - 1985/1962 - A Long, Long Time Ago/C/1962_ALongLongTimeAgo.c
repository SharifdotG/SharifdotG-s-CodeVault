#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases--) {
        int yearsPassed;
        scanf("%d", &yearsPassed);

        if (yearsPassed < 2015) {
            printf("%d D.C.\n", 2015 - yearsPassed);
        } else printf("%d A.C.\n", yearsPassed - 2014);
    }

    return 0;
}
