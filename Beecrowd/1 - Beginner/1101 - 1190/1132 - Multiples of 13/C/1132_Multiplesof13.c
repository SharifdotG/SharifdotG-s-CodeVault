#include <stdio.h>

int main() {
    int value1, value2, sum = 0;
    scanf("%d %d", &value1, &value2);

    if (value1 > value2) {
        int temp = value1;
        value1 = value2;
        value2 = temp;
    }

    for (int i = value1; i <= value2; i++) {
        if (i % 13 != 0) {
            sum += i;
        }
    }

    printf("%d\n", sum);
    
    return 0;
}
