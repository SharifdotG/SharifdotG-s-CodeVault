#include <stdio.h>

int main() {
    int number, index;
    scanf("%d", &number);

    long long fibonacci[61];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i <= 60; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    while (number--) {
        scanf("%d", &index);
        printf("Fib(%d) = %lld\n", index, fibonacci[index]);
    }
    
    return 0;
}
