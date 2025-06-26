#include <stdio.h>
#include <math.h>

int main() {
    int number;
    scanf("%d", &number);

    double result = (pow(((1 + sqrt(5)) / 2), number) - pow(((1 - sqrt(5)) / 2), number)) / sqrt(5);
    printf("%.1f\n", result);

    return 0;
}
