#include <stdio.h>
#include <math.h>

int main() {
    int number;
    float square_root;

    printf("Enter a number: ");
    scanf("%d", &number);

    square_root = sqrt(number);

    printf("The square root of %d is %f\n", number, square_root);

    return 0;
}