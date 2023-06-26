/**
 * @file check_character.c
 * @author SharifdotG
 * @date 2023-06-26
 * @brief A C program to input any character and check whether it is alphabet, digit or special character.
 */

#include <stdio.h>

/**
 * @brief The main function.
 * @return 0 on success.
 */
int main() {

    /**
     * @brief The character to be checked.
     */
    char character;

    /**
     * @brief Prompt the user to enter a character.
     */
    printf("Enter any character: ");

    /**
     * @brief Read the character from the user.
     */
    scanf("%c", &character);

    /**
     * @brief Check if the character is an alphabet.
     */
    if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z') {
        printf("The character is an alphabet.");
    }

    /**
     * @brief Check if the character is a digit.
     */
    else if (character >= '0' && character <= '9') {
        printf("The character is a digit.");
    }

    /**
     * @brief Check if the character is a special character.
     */
    else {
        printf("The character is a special character.");
    }

    /**
     * @brief Return 0 on success.
     */
    return 0;
}