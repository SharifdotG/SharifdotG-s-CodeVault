/**
 * @file electricity_bill.c
 * @author SharifdotG
 * @date 2023-06-26
 * @brief Calculates the electricity bill based on the given unit charges.
 */

#include <stdio.h>

int main() {

    /**
     * @brief The number of units consumed.
     */
    float unit;

    /**
     * @brief The total electricity bill.
     */
    float bill;

    /**
     * @brief Gets the number of units consumed from the user.
     */
    printf("Enter the number of units consumed: ");
    scanf("%f", &unit);

    /**
     * @brief Calculates the bill according to the given unit charges.
     */
    if (unit <= 50) {
        bill = unit * 0.50;
    } else if (unit <= 150) {
        bill = 25 + (unit - 50) * 0.75;
    } else if (unit <= 250) {
        bill = 100 + (unit - 150) * 1.20;
    } else {
        bill = 220 + (unit - 250) * 1.50;
    }

    /**
     * @brief Adds a 20% surcharge to the bill.
     */
    bill = bill + (bill * 0.20);

    /**
     * @brief Prints the total electricity bill.
     */
    printf("Total electricity bill is: %.2f\n", bill);

    return 0;
}