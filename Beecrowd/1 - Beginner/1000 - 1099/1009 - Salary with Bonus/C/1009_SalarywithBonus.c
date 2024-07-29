#include <stdio.h>

int main() {
    char name[100];
    double salary, sales;

    scanf("%s %lf %lf", name, &salary, &sales);

    double totalSalary = salary + sales * 0.15;

    printf("TOTAL = R$ %.2lf\n", totalSalary);

    return 0;
}
