#include <stdio.h>

int main() {
    int value1, value2;

    while (1) {
        scanf("%d %d", &value1, &value2);

        if (value1 == value2) break;

        if (value1 > value2) {
            printf("Decrescente\n");
        } else printf("Crescente\n");
    }
    
    return 0;
}
