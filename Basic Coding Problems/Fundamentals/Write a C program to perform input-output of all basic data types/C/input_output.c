/**
 * @file input_output.c
 * @author SharifdotG
 * @date 2023-06-19
 * @brief A C program to perform input/output of all basic data types.
 */

#include <stdio.h>

/**
 * @brief The main function.
 *
 * This function prompts the user to enter a value for each of the basic data types,
 * and then prints the value that was entered.
 *
 * @return 0 on success, non-zero on error.
 */
int main() {

    /**
     * @brief A character variable.
     */
    char charVal;

    /**
     * @brief An unsigned character variable.
     */
    unsigned char unsignedCharVal;

    /**
     * @brief A short integer variable.
     */
    short shortVal;

    /**
     * @brief An integer variable.
     */
    int intVal;

    /**
     * @brief An unsigned integer variable.
     */
    unsigned int unsignedIntVal;

    /**
     * @brief A long integer variable.
     */
    long longVal;

    /**
     * @brief An unsigned long integer variable.
     */
    unsigned long unsignedLongVal;

    /**
     * @brief An unsigned long long integer variable.
     */
    unsigned long long unsignedLongLongVal;

    /**
     * @brief A float variable.
     */
    float floatVal;

    /**
     * @brief A double variable.
     */
    double doubleVal;

    /**
     * @brief A long double variable.
     */
    long double longDoubleVal;

    // Prompt the user to enter a value for each of the basic data types.

    printf("Enter a character: ");
    charVal = getchar();
    getchar();

    printf("Enter an unsigned character: ");
    unsignedCharVal = getchar();
    getchar();

    printf("Enter a short integer: ");
    scanf("%hd", &shortVal);

    printf("Enter an integer: ");
    scanf("%d", &intVal);

    printf("Enter an unsigned integer: ");
    scanf("%u", &unsignedIntVal);

    printf("Enter a long integer: ");
    scanf("%ld", &longVal);

    printf("Enter an unsigned long integer: ");
    scanf("%lu", &unsignedLongVal);

    printf("Enter an unsigned long long integer: ");
    scanf("%llu", &unsignedLongLongVal);

    printf("Enter a float: ");
    scanf("%f", &floatVal);

    printf("Enter a double: ");
    scanf("%lf", &doubleVal);

    printf("Enter a long double: ");
    scanf("%Lf", &longDoubleVal);

    // Print the values that were entered.

    printf("\nThe character is: %c\n", charVal);
    printf("The unsigned character is: %c\n", unsignedCharVal);
    printf("The short integer is: %hd\n", shortVal);
    printf("The integer is: %d\n", intVal);
    printf("The unsigned integer is: %u\n", unsignedIntVal);
    printf("The long integer is: %ld\n", longVal);
    printf("The unsigned long integer is: %lu\n", unsignedLongVal);
    printf("The unsigned long long integer is: %llu\n", unsignedLongLongVal);
    printf("The float is: %f\n", floatVal);
    printf("The double is: %lf\n", doubleVal);
    printf("The long double is: %Lf\n", longDoubleVal);

    return 0;
}
