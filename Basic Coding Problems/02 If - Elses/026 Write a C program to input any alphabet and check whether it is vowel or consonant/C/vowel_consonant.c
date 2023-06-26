/**
 * @file vowel_consonant.c
 * @author SharifdotG
 * @date 2023-06-26
 * @brief This program checks whether an alphabet is a vowel or consonant.
 */

#include <stdio.h>

int main() {

    /**
     * @brief The variable `letter` stores the alphabet entered by the user.
     */
    char letter;

    /**
     * @brief Prompts the user to enter an alphabet.
     */
    printf("Enter any alphabet: ");

    /**
     * @brief Reads the alphabet entered by the user and stores it in the `letter` variable.
     */
    scanf("%c", &letter);

    /**
     * @brief Checks whether the `letter` variable is a vowel.
     *
     * @return If the `letter` variable is a vowel, the function returns 1. Otherwise, it returns 0.
     */
    if (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U') {

        /**
         * @brief Prints a message that the `letter` variable is a vowel.
         */
        printf("The alphabet is a vowel.\n");

    } else {

        /**
         * @brief Prints a message that the `letter` variable is a consonant.
         */
        printf("The alphabet is a consonant.\n");
    }

    return 0;
}