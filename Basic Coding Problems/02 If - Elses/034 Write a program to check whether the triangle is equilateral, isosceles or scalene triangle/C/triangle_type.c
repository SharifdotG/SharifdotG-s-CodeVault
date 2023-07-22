#include <stdio.h>

int main() {
    int side_a, side_b, side_c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side_a, &side_b, &side_c);

    if (side_a == side_b && side_b == side_c) {
        printf("The triangle is equilateral.\n");
    } else if (side_a == side_b || side_a == side_c || side_b == side_c) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }

    return 0;
}