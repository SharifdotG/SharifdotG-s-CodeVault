#include <stdio.h>

int main() {
    int complaints;

    while (scanf("%d", &complaints) != EOF) {
        if (complaints == 0) {
            printf("vai ter copa!\n");
        } else printf("vai ter duas!\n");
    }

    return 0;
}
