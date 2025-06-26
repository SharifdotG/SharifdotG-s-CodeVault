#include <stdio.h>

int main() {
    int number[20];

    for (int i = 0; i < 20; i++) {
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, number[19 - i]);
    }
    
    return 0;
}
