#include <stdio.h>

int main() {
    int first, second, third, fourth;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);

    int max = first;
    if (second > max) {
        max = second;
    } if (third > max) {
        max = third;
    } if (fourth > max) {
        max = fourth;
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}