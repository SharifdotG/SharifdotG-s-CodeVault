#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);

    double percentage = ((b - a) / a) * 100;

    printf("%.2lf%%\n", percentage);

    return 0;
}
