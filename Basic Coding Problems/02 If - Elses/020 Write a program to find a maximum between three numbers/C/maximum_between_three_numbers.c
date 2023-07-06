#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int max_num = num1;
    if (num2 > max_num) {
        max_num = num2;
    } if (num3 > max_num) {
        max_num = num3;
    }

    printf("%d is the maximum number\n", max_num);
    return 0;
}