#include <stdio.h>

int main() {
    int number, highest = 0, position = 0;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &number);

        if (number > highest) {
            highest = number;
            position = i;
        }
    }

    printf("%d\n%d\n", highest, position);
    
    return 0;
}
