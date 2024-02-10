#include <stdio.h>

int main() {
    int value1, value2;
    scanf("%d %d", &value1, &value2);

    if (value1 > value2) {
        int temp = value1;
        value1 = value2;
        value2 = temp;
    }

    for (int i = value1 + 1; i < value2; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}
