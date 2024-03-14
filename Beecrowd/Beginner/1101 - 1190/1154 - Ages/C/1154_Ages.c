#include <stdio.h>

int main() {
    int age, sum = 0, count = 0;

    while (scanf("%d", &age) && age >= 0) {
        sum += age;
        count++;
    }

    printf("%.2f\n", (float)sum / count);

    return 0;
}
