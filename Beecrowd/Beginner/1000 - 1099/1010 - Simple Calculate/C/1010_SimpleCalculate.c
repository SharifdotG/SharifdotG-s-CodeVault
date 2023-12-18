#include <stdio.h>

int main() {
    int product1Code, product1Units, product2Code, product2Units;
    double product1Price, product2Price;

    scanf("%d %d %lf", &product1Code, &product1Units, &product1Price);
    scanf("%d %d %lf", &product2Code, &product2Units, &product2Price);

    double total = product1Units * product1Price + product2Units * product2Price;

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
