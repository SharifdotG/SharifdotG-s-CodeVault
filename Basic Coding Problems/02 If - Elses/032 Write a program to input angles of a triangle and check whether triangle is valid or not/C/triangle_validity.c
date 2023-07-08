#include <stdio.h>

int main() {
    int angle_a, angle_b, angle_c;

    printf("Enter the angles of the triangle: ");
    scanf("%d %d %d", &angle_a, &angle_b, &angle_c);

    if (angle_a + angle_b + angle_c == 180 && angle_a > 0 && angle_b > 0 && angle_c > 0) {
        printf("The triangle is valid.");
    } else {
        printf("The triangle is not valid.");
    }

    return 0;
}