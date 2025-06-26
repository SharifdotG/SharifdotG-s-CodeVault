#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int quotient = a / b;
    int remainder = a % b;

    if (remainder < 0) {
        remainder += abs(b);
        quotient = (a - remainder) / b;
    }

    printf("%d %d\n", quotient, remainder);

    return 0;
}
