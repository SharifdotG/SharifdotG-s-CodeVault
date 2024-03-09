#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases--) {
        int hour, minute, event;

        scanf("%d %d %d", &hour, &minute, &event);

        if (hour < 10) {
            printf("0%d", hour);
        } else printf("%d", hour);

        printf(":");

        if (minute < 10) {
            printf("0%d", minute);
        } else printf("%d", minute);

        if (event == 1) {
            printf(" - A porta abriu!\n");
        } else printf(" - A porta fechou!\n");
    }

    return 0;
}
