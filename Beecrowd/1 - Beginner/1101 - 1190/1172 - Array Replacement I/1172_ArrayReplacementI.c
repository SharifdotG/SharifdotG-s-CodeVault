#include <stdio.h>

int main() {
    int number[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &number[i]);

        if (number[i] <= 0) {
            number[i] = 1;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("X[%d] = %d\n", i, number[i]);
    }
    
    return 0;
}
