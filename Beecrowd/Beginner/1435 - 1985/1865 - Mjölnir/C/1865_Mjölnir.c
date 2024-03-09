#include <stdio.h>
#include <string.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases--) {
        char name[20];
        int force;
        scanf("%s %d", name, &force);

        if (strcmp(name, "Thor") == 0) {
            printf("Y\n");
        } else printf("N\n");
    }

    return 0;
}
