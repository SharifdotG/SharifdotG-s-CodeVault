#include <stdio.h>

int main() {
    double salary;
    scanf("%lf", &salary);

    double tax = 0;

    if (salary > 4500) {
        tax += (salary - 4500) * 0.28;
        salary = 4500;
    }

    if (salary > 3000) {
        tax += (salary - 3000) * 0.18;
        salary = 3000;
    }

    if (salary > 2000) {
        tax += (salary - 2000) * 0.08;
        salary = 2000;
    }

    if (tax == 0) printf("Isento\n");
    else printf("R$ %.2lf\n", tax);
    
    return 0;
}
