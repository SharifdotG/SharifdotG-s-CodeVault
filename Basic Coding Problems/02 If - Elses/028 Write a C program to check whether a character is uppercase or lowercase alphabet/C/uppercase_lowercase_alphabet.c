/**
 * @file uppercase_lowercase_alphabet.c
 * @author SharifdotG
 * @date 2023-06-26
 * @brief A C program to check whether a character is uppercase or lowercase alphabet.
 */

#include <stdio.h>

int main() {

    /**
     * @brief The character to be checked.
     */
    char character;

    /**
     * @brief Prompts the user to enter a character.
     */
    printf("Enter a character: ");

    /**
     * @brief Gets the character from the user.
     */
    scanf("%c", &character);

    /**
     * @brief Checks if the character is uppercase.
     */
    if (character >= 'A' && character <= 'Z') {

        /**
         * @brief Prints a message that the character is uppercase alphabet.
         */
        printf("The character is uppercase alphabet.\n");
    }

    /**
     * @brief Checks if the character is lowercase.
     */
    else if (character >= 'a' && character <= 'z') {

        /**
         * @brief Prints a message that the character is lowercase alphabet.
         */
        printf("The character is lowercase alphabet.\n");
    }

    /**
     * @brief Checks if the character is not an alphabet.
     */
    else {

        /**
         * @brief Prints a message that the character is not an alphabet.
         */
        printf("The character is not an alphabet.\n");
    }

    /**
     * @brief Returns 0.
     */
    return 0;
}