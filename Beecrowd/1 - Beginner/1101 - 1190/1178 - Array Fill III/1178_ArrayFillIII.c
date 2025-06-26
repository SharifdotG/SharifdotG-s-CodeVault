#include <stdio.h>

int main() {
    double number;
    scanf("%lf", &number);

    for (int i = 0; i < 100; i++) {
        printf("N[%d] = %.4lf\n", i, number);
        
        number /= 2;
    }

    return 0;
}
