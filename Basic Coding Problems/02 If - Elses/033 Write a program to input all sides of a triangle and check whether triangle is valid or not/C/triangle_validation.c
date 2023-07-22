#include <stdio.h>

int main() {
    int side_a, side_b, side_c;

    printf("Enter the three sides of a triangle: ");
    scanf("%d %d %d", &side_a, &side_b, &side_c);

    if (side_a + side_b > side_c && side_a + side_c > side_b && side_b + side_c > side_a) {
        printf("The triangle is valid.");
    } else {
        printf("The triangle is not valid.");
    }

    return 0;
}