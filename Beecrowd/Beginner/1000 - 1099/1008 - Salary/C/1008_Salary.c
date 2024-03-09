#include <stdio.h>

int main() {
    int number, hours;
    double SALARY;
    scanf("%d %d %lf", &number, &hours, &SALARY);

    double totalSalary = hours * SALARY;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", totalSalary);

    return 0;
}
