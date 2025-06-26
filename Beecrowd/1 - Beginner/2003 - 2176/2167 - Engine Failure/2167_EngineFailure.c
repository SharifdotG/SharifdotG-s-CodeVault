#include <stdio.h>

int main() {
    int speed;
    scanf("%d", &speed);

    int rpm[speed];
    for (int i = 0; i < speed; i++) {
        scanf("%d", &rpm[i]);
    }

    for (int i = 0; i < speed - 1; i++) {
        if (rpm[i] > rpm[i + 1]) {
            printf("%d\n", i + 2);
            
            return 0;
        }
    }

    printf("0\n");

    return 0;
}
