#include <stdio.h>

int main() {
    int spentTime, averageSpeed;
    scanf("%d %d", &spentTime, &averageSpeed);

    double liters = spentTime * averageSpeed / 12.0;

    printf("%.3lf\n", liters);

    return 0;
}