#include <stdio.h>

int main() {
    int first_angle, second_angle, third_angle;

    printf("Enter the first angle: ");
    scanf("%d", &first_angle);

    printf("Enter the second angle: ");
    scanf("%d", &second_angle);

    third_angle = 180 - (first_angle + second_angle);

    printf("The third angle of the triangle is: %d\n", third_angle);

    return 0;
}