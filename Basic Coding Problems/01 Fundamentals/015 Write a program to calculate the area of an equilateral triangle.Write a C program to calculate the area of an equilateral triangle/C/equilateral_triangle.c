#include <stdio.h>
#include <math.h>

int main() {
    float side, area;

    printf("Enter the side of the equilateral triangle: ");
    scanf("%f", &side);

    area = (sqrt(3) / 4) * side * side;

    printf("The area of the equilateral triangle is: %f\n", area);

    return 0;
}