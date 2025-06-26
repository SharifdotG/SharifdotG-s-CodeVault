#include <stdio.h>

int main() {
    double salary;
    scanf("%lf", &salary);

    double newSalary;
    int percentage;

    if (salary <= 400) {
        newSalary = salary * 1.15;
        percentage = 15;
    } else if (salary <= 800) {
        newSalary = salary * 1.12;
        percentage = 12;
    } else if (salary <= 1200) {
        newSalary = salary * 1.10;
        percentage = 10;
    } else if (salary <= 2000) {
        newSalary = salary * 1.07;
        percentage = 7;
    } else {
        newSalary = salary * 1.04;
        percentage = 4;
    }

    printf("Novo salario: %.2lf\n", newSalary);
    printf("Reajuste ganho: %.2lf\n", newSalary - salary);
    printf("Em percentual: %d %%\n", percentage);
    
    return 0;
}
