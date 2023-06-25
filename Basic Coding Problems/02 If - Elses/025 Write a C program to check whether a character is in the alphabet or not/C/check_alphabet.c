/**
 * @file check_alphabet.c
 * @author SharifdotG
 * @date 2023-06-25
 * @brief C program to check whether a character is in the alphabet or not.
 */

#include <stdio.h>

/**
 * @brief Main function.
 *
 * @return 0 on success, non-zero on error.
 */
int main() {

    /**
     * @brief Variable to store the character entered by the user.
     */
    char character;

    /**
     * @brief Prompt the user to enter a character.
     */
    printf("Enter a character: ");

    /**
     * @brief Read the character entered by the user.
     */
    scanf("%c", &character);

    /**
     * @brief Check if the character is in the alphabet.
     */
    if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z') {
        printf("%c is in the alphabet.\n", character);
    } else {
        printf("%c is not in the alphabet.\n", character);
    }

    /**
     * @brief Return 0 on success, non-zero on error.
     */
    return 0;
}