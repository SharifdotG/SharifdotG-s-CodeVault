#include <stdio.h>

int main() {
    char character;
    unsigned char unsignedCharacter;
    short shortInteger;
    int integer;
    unsigned int unsignedInteger;
    long longInteger;
    unsigned long unsignedLong;
    unsigned long long unsignedLongLong;
    float floatValue;
    double doubleValue;
    long double longDoubleValue;

    printf("Enter a character: ");
    character = getchar();
    getchar();

    printf("Enter an unsigned character: ");
    unsignedCharacter = getchar();
    getchar();

    printf("Enter a short integer: ");
    scanf("%hd", &shortInteger);

    printf("Enter an integer: ");
    scanf("%d", &integer);

    printf("Enter an unsigned integer: ");
    scanf("%u", &unsignedInteger);

    printf("Enter a long integer: ");
    scanf("%ld", &longInteger);

    printf("Enter an unsigned long integer: ");
    scanf("%lu", &unsignedLong);

    printf("Enter an unsigned long long integer: ");
    scanf("%llu", &unsignedLongLong);

    printf("Enter a float: ");
    scanf("%f", &floatValue);

    printf("Enter a double: ");
    scanf("%lf", &doubleValue);

    printf("Enter a long double: ");
    scanf("%Lf", &longDoubleValue);

    printf("\nThe character is: %c\n", character);
    printf("The unsigned character is: %c\n", unsignedCharacter);
    printf("The short integer is: %hd\n", shortInteger);
    printf("The integer is: %d\n", integer);
    printf("The unsigned integer is: %u\n", unsignedInteger);
    printf("The long integer is: %ld\n", longInteger);
    printf("The unsigned long integer is: %lu\n", unsignedLong);
    printf("The unsigned long long integer is: %llu\n", unsignedLongLong);
    printf("The float is: %f\n", floatValue);
    printf("The double is: %lf\n", doubleValue);
    printf("The long double is: %Lf\n", longDoubleValue);

    return 0;
}