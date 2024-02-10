#include <stdio.h>

int main() {
    double radius;
    scanf("%lf", &radius);

    double volume = (4.0 / 3) * 3.14159 * radius * radius * radius;

    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
}
