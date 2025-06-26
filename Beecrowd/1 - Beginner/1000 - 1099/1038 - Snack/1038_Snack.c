#include <stdio.h>

int main() {
    int code, quantity;
    scanf("%d %d", &code, &quantity);

    double prices[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    double price = prices[code - 1];

    printf("Total: R$ %.2f\n", price * quantity);
    
    return 0;
}
