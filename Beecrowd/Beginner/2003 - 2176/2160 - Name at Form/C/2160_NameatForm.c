#include <stdio.h>
#define MAX_LENGTH 1000

int main() {
    char name[MAX_LENGTH];
    fgets(name, sizeof(name), stdin);

    if (strlen(name) <= 81) {
        printf("YES\n");
    } else printf("NO\n");

    return 0;
}
