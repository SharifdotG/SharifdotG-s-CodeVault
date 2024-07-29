#include <stdio.h>

int main() {
    int number, factorial = 1;
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    printf("%d\n", factorial);
    
    return 0;
}
