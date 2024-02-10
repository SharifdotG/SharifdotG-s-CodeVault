#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    for (int i = 0; i < number; i++) {
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);

        double average = (a * 2 + b * 3 + c * 5) / 10;

        printf("%.1lf\n", average);
    }
    
    return 0;
}
