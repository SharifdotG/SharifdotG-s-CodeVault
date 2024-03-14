#include <stdio.h>

int main() {
    double number[100];

    for (int i = 0; i < 100; i++) {
        scanf("%lf", &number[i]);

        if (number[i] <= 10) {
            printf("A[%d] = %.1lf\n", i, number[i]);
        }
    }
    
    return 0;
}
