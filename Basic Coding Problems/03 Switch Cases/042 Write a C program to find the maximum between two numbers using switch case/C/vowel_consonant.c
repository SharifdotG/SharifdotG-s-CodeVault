/**
 * @file vowel_consonant.c
 *
 * @brief A C program to check whether an alphabet is vowel or consonant using switch case.
 *
 * @author SharifdotG
 * @date 2023-06-29
 */

#include <stdio.h>

int main() {

    /**
     * @brief The letter to be checked.
     */
    char letter;

    /**
     * @brief Prompt the user to enter an alphabet.
     */
    printf("Enter an alphabet: ");
    scanf("%c", &letter);

    /**
     * @brief Check if the letter is a vowel.
     */
    switch (letter) {
        
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            /**
             * @brief The letter is a vowel.
             */
            printf("%c is a vowel.\n", letter);
            break;
        default:
            /**
             * @brief The letter is a consonant.
             */
            printf("%c is a consonant.\n", letter);
    }

    /**
     * @brief Returns 0 on success, non-zero on failure.
     */
    return 0;
}