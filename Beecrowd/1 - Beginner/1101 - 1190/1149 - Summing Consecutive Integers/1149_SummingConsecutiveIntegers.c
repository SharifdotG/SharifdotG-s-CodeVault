#include <stdio.h>

int main() {
    int a, numbers;
    int sum = 0;

    scanf("%d %d", &a, &numbers);

    while (numbers <= 0) {
        scanf("%d", &numbers);
    }

    for (int i = 0; i < numbers; i++) {
        sum += a + i;
    }

    printf("%d\n", sum);
    
    return 0;
}
