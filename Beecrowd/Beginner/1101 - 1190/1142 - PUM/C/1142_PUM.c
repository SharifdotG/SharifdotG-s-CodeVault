#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int value = 1;

    while (number--) {
        printf("%d %d %d PUM\n", value, value + 1, value + 2);
        value += 4;
    }
    
    return 0;
}
