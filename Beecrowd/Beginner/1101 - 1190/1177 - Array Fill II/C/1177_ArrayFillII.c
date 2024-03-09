#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int array[1000];

    for (int i = 0; i < 1000; i++) {
        array[i] = i % number;
    }

    for (int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, array[i]);
    }
    
    return 0;
}
