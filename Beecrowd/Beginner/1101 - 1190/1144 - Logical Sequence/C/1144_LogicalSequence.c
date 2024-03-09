#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        printf("%d %d %d\n", i, i * i, i * i * i);
        printf("%d %d %d\n", i, i * i + 1, i * i * i + 1);
    }
    
    return 0;
}
