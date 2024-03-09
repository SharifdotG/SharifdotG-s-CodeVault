#include <stdio.h>

int main() {
    int products;
    scanf("%d", &products);

    int product[products], quantity[products];

    for (int i = 0; i < products; i++) {
        scanf("%d %d", &product[i], &quantity[i]);
    }

    double total = 0;

    for (int i = 0; i < products; i++) {
        if (product[i] == 1001) {
            total += 1.50 * quantity[i];
        } else if (product[i] == 1002) {
            total += 2.50 * quantity[i];
        } else if (product[i] == 1003) {
            total += 3.50 * quantity[i];
        } else if (product[i] == 1004) {
            total += 4.50 * quantity[i];
        } else if (product[i] == 1005) {
            total += 5.50 * quantity[i];
        }
    }

    printf("%.2lf\n", total);

    return 0;
}
