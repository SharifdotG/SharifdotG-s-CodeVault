#include <stdio.h>

int main() {
    int costPrice, sellingPrice, profit = 0, loss = 0;

    printf("Enter the cost price: ");
    scanf("%d", &costPrice);

    printf("Enter the selling price: ");
    scanf("%d", &sellingPrice);

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
    } else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
    }

    if (profit > 0) {
        printf("Profit is %d\n", profit);
    } else if (loss > 0) {
        printf("Loss is %d\n", loss);
    } else {
        printf("No profit no loss\n");
    }

    return 0;
}