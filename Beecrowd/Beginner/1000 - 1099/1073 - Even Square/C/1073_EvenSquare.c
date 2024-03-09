#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            printf("%d^2 = %d\n", i, i * i);
        }
    }
    
    return 0;
}
