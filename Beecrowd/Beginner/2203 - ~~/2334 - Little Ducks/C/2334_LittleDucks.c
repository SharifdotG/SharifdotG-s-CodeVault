#include <stdio.h>

int main() {
    unsigned long long ducks;

    while (scanf("%llu", &ducks) != EOF) {
        if (ducks == -1) break;

        if (ducks == 0) {
            printf("0\n");
        } else {
            printf("%llu\n", ducks - 1);
        }
    }

    return 0;
}
