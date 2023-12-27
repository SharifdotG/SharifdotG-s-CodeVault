#include <stdio.h>
#include <math.h>

int main() {
    double number;
    scanf("%lf", &number);

    printf("%.1lf %.1lf\n", number / log(number), 1.25506 * (number / log(number)));

    return 0;
}
