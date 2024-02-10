#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    while (number--) {
        int value1, value2;
        scanf("%d %d", &value1, &value2);

        if (value2 == 0) printf("divisao impossivel\n");
        else printf("%.1lf\n", (double)value1 / value2);
    }

    return 0;
}
