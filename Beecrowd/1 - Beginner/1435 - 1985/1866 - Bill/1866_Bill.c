#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases--) {
        int number;
        scanf("%d", &number);

        if (number % 2 == 0) {
            printf("0\n");
        } else printf("1\n");
    }

    return 0;
}
