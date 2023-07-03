#include <stdio.h>

int main() {
    char character;
    unsigned char unsigned_character;
    short short_integer;
    int integer;
    unsigned int unsigned_integer;
    long long_integer;
    unsigned long unsigned_long;
    unsigned long long unsigned_long_long;
    float float_value;
    double double_value;
    long double long_double_value;

    printf("Enter a character: ");
    character = getchar();
    getchar();

    printf("Enter an unsigned character: ");
    unsigned_character = getchar();
    getchar();

    printf("Enter a short integer: ");
    scanf("%hd", &short_integer);

    printf("Enter an integer: ");
    scanf("%d", &integer);

    printf("Enter an unsigned integer: ");
    scanf("%u", &unsigned_integer);

    printf("Enter a long integer: ");
    scanf("%ld", &long_integer);

    printf("Enter an unsigned long integer: ");
    scanf("%lu", &unsigned_long);

    printf("Enter an unsigned long long integer: ");
    scanf("%llu", &unsigned_long_long);

    printf("Enter a float: ");
    scanf("%f", &float_value);

    printf("Enter a double: ");
    scanf("%lf", &double_value);

    printf("Enter a long double: ");
    scanf("%Lf", &long_double_value);

    printf("\nThe character is: %c\n", character);
    printf("The unsigned character is: %c\n", unsigned_character);
    printf("The short integer is: %hd\n", short_integer);
    printf("The integer is: %d\n", integer);
    printf("The unsigned integer is: %u\n", unsigned_integer);
    printf("The long integer is: %ld\n", long_integer);
    printf("The unsigned long integer is: %lu\n", unsigned_long);
    printf("The unsigned long long integer is: %llu\n", unsigned_long_long);
    printf("The float is: %f\n", float_value);
    printf("The double is: %lf\n", double_value);
    printf("The long double is: %Lf\n", long_double_value);

    return 0;
}