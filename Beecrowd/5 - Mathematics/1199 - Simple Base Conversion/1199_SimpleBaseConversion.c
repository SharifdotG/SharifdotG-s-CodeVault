#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char n[100];
    while (scanf("%s", n) != EOF) {
        if (n[0] == '-') {
            break;
        }

        if (n[1] == 'x') {
            int x;
            sscanf(n, "%x", &x);
            printf("%d\n", x);
        } else {
            unsigned int num;
            sscanf(n, "%u", &num);
            printf("0x%X\n", num);
        }
    }
    return 0;
}
