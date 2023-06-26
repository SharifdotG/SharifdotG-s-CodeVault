/**
 * @file count_notes.c
 * @author SharifdotG
 * @date 2023-06-26
 * @brief C program to count the total number of notes in a given amount.
 */

#include <stdio.h>

/**
 * @brief Main function.
 *
 * @return 0 on success.
 */
int main() {

    /**
     * @brief The amount of money.
     */
    int amount;

    /**
     * @brief The number of 500 notes.
     */
    int note_500;

    /**
     * @brief The number of 200 notes.
     */
    int note_200;

    /**
     * @brief The number of 100 notes.
     */
    int note_100;

    /**
     * @brief The number of 50 notes.
     */
    int note_50;

    /**
     * @brief The number of 20 notes.
     */
    int note_20;

    /**
     * @brief The number of 10 notes.
     */
    int note_10;

    /**
     * @brief The number of 5 notes.
     */
    int note_5;

    /**
     * @brief The number of 2 notes.
     */
    int note_2;

    /**
     * @brief The number of 1 notes.
     */
    int note_1;

    /**
     * Prompt the user to enter the amount of money.
     */
    printf("Enter the amount: ");
    scanf("%d", &amount);

    /**
     * Calculate the number of notes of each denomination.
     */
    note_500 = amount / 500;
    amount %= 500;

    note_200 = amount / 200;
    amount %= 200;

    note_100 = amount / 100;
    amount %= 100;

    note_50 = amount / 50;
    amount %= 50;

    note_20 = amount / 20;
    amount %= 20;

    note_10 = amount / 10;
    amount %= 10;

    note_5 = amount / 5;
    amount %= 5;

    note_2 = amount / 2;
    amount %= 2;

    note_1 = amount / 1;

    /**
     * Print the number of notes of each denomination.
     */
    printf("The number of 500 notes is: %d\n", note_500);
    printf("The number of 200 notes is: %d\n", note_200);
    printf("The number of 100 notes is: %d\n", note_100);
    printf("The number of 50 notes is: %d\n", note_50);
    printf("The number of 20 notes is: %d\n", note_20);
    printf("The number of 10 notes is: %d\n", note_10);
    printf("The number of 5 notes is: %d\n", note_5);
    printf("The number of 2 notes is: %d\n", note_2);
    printf("The number of 1 notes is: %d\n", note_1);

    return 0;
}