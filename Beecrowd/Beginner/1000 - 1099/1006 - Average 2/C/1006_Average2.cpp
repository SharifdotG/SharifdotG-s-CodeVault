#include <stdio.h>

int main() {
    double a, B, c;
    scanf("%lf %lf %lf", &a, &B, &c);

    double average = (a * 2 + B * 3 + c * 5) / 10;

    printf("MEDIA = %.1lf\n", average);
    
    return 0;
}
