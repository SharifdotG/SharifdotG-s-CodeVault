/*
 * This program performs input/output of all basic data types.
 *
 * Author: SharifdotG
 */

#include <stdio.h>

int main() {

    /* Declare variables of all basic data types. */
    //SharifdotG: I added unsigned long long and long double
    char charVal;
    unsigned char unsignedCharVal;
    short shortVal;
    int intVal;
    unsigned int unsignedIntVal;
    long longVal;
    unsigned long unsignedLongVal;
    unsigned long long unsignedLongLongVal;
    float floatVal;
    double doubleVal;
    long double longDoubleVal;

    /* Prompt the user to enter a value for each data type. */
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

    /* Print the values of the variables. */
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