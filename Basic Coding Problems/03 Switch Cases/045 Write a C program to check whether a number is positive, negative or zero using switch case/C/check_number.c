/**
 * @file check_number.c
 *
 * @brief A C program to check whether a number is positive, negative or zero using switch case.
 *
 * @author SharifdotG
 * @date 2023-06-29
 *
 * @see https://github.com/SharifdotG/SharifdotG-s-CodeVault
 * 
 * This program first prompts the user to enter a number. Then, it uses a switch statement
 * to check whether the number is positive, negative or zero. If the number is positive, the
 * program prints "The number is positive." If the number is negative, the program prints "The
 * number is negative." If the number is zero, the program prints "The number is zero." 
 */

#include<stdio.h>

int main() {

    /**
     * @brief Variable to store the number entered by the user.
     */
    int num;

    /**
     * @brief Prompt the user to enter a number.
     */
    printf("Enter a number: ");

    /**
     * @brief Read the number entered by the user.
     */
    scanf("%d", &num);

    /**
     * @brief Check if the number is positive.
     */
    switch(num>0) {

        /**
         * @brief If the number is positive, print "The number is positive."
         */
        case 1:
            printf("The number is positive.");
            break;

        /**
         * @brief If the number is not positive, check if it is negative.
         */
        case 0:
            switch(num<0) {

                /**
                 * @brief If the number is negative, print "The number is negative."
                 */
                case 1:
                    printf("The number is negative.");
                    break;

                /**
                 * @brief If the number is not negative, print "The number is zero."
                 */
                case 0:
                    printf("The number is zero.");
                    break;
            }
            break;
    }

    /**
     * @brief Return 0 to indicate success.
     */
    return 0;
}