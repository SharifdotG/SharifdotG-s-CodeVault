/**
 * @file sqrt.c
 * @brief A C program to enter any number and calculate its square root.
 * @author SharifdotG
 * @date 2023-06-25
 *
 * This program first asks the user to enter a number. Then, it uses the
 * `sqrt()` function from the `math.h` header file to calculate the square root
 * of the number. Finally, it prints the square root to the console.
 */

#include <stdio.h>
#include <math.h>

int main() {

    /**
     * @brief The `number` variable stores the number entered by the user.
     */
    int number;

    /**
     * @brief The `square_root` variable stores the square root of the `number` variable.
     */
    float square_root;

    /**
     * @brief Prompts the user to enter a number.
     */
    printf("Enter a number: ");

    /**
     * @brief Reads the number entered by the user and stores it in the `number` variable.
     */
    scanf("%d", &number);

    /**
     * @brief Calculates the square root of the `number` variable and stores it in the `square_root` variable.
     */
    square_root = sqrt(number);

    /**
     * @brief Prints the square root of the `number` variable to the console.
     */
    printf("The square root of %d is %f\n", number, square_root);

    return 0;
}