#include <stdio.h>

int main() {
    int grade;
    scanf("%d", &grade);

    if (grade == 0)
        printf("E\n");
    else if (grade >= 1 && grade <= 35)
        printf("D\n");
    else if (grade >= 36 && grade <= 60)
        printf("C\n");
    else if (grade >= 61 && grade <= 85)
        printf("B\n");
    else if (grade >= 86 && grade <= 100)
        printf("A\n");

    return 0;
}
