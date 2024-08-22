#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases--) {
        char number[100];
        scanf("%s", number);

        if ((number[strlen(number) - 1] - '0') % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

    return 0;
}
