#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases--) {
        int radius1, radius2;
        scanf("%d %d", &radius1, &radius2);

        printf("%d\n", radius1 + radius2);
    }

    return 0;
}
