/**
 * @file profit_or_loss.c
 * @author SharifdotG
 * @date 2023-06-26
 * @brief A C program to calculate profit or loss.
 *
 * This program takes the cost price and selling price of an item as input, and
 * then calculates the profit or loss. If the selling price is greater than the
 * cost price, then the profit is calculated. Otherwise, the loss is calculated.
 * If the cost price and selling price are equal, then no profit or loss is
 * calculated.
 */

#include <stdio.h>

int main() {

    /**
     * @brief The cost price of the item.
     */
    int cost_price;

    /**
     * @brief The selling price of the item.
     */
    int selling_price;

    /**
     * @brief The profit made on the item.
     */
    int profit;

    /**
     * @brief The loss made on the item.
     */
    int loss;

    /**
     * @brief Prompts the user to enter the cost price.
     */
    printf("Enter the cost price: ");
    scanf("%d", &cost_price);

    /**
     * @brief Prompts the user to enter the selling price.
     */
    printf("Enter the selling price: ");
    scanf("%d", &selling_price);

    /**
     * @brief Calculates the profit.
     */
    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
    }

    /**
     * @brief Calculates the loss.
     */
    else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
    }

    /**
     * @brief Prints the result.
     */
    if (profit > 0) {
        printf("Profit is %d\n", profit);
    } else if (loss > 0) {
        printf("Loss is %d\n", loss);
    } else {
        printf("No profit no loss\n");
    }

    return 0;
}