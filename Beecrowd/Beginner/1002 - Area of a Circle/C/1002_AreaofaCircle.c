#include <stdio.h>

int main() {
    double radius;
    scanf("%lf", &radius);

    double area = 3.14159 * radius * radius;

    printf("A=%.4lf\n", area);
    
    return 0;
}
