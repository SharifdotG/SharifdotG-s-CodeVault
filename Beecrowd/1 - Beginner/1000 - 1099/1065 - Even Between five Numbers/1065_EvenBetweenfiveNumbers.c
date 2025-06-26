#include <stdio.h>

int main() {
    int even = 0;

    for (int i = 0; i < 5; i++) {
        int number;
        scanf("%d", &number);

        if (number % 2 == 0) even++;
    }

    printf("%d valores pares\n", even);
    
    return 0;
}
