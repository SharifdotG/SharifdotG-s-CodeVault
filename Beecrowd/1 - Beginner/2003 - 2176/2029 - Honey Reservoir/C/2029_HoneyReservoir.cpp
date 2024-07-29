#include <stdio.h>
#define PI 3.14

int main() {
    double volume, diameter;

    while (scanf("%lf %lf", &volume, &diameter) != EOF) {
        double radius = diameter / 2;
        double area = PI * radius * radius;
        double height = volume / area;

        printf("ALTURA = %.2lf\n", height);
        printf("AREA = %.2lf\n", area);
    }

    return 0;
}
