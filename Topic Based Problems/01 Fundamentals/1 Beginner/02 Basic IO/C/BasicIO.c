#include <stdio.h>

int main() {
    short shortValue;
    int intValue;
    long longValue;
    long long longLongValue;
    float floatValue;
    double doubleValue;
    long double longDoubleValue;
    char charValue;
    char stringValue[100]; // Assuming a maximum string length of 100

    printf("Enter shortValue: ");
    scanf("%hd", &shortValue);

    printf("Enter intValue: ");
    scanf("%d", &intValue);

    printf("Enter longValue: ");
    scanf("%ld", &longValue);

    printf("Enter longLongValue: ");
    scanf("%lld", &longLongValue);

    printf("Enter floatValue: ");
    scanf("%f", &floatValue);

    printf("Enter doubleValue: ");
    scanf("%lf", &doubleValue);

    printf("Enter longDoubleValue: ");
    scanf("%Lf", &longDoubleValue);

    printf("Enter charValue: ");
    scanf(" %c", &charValue); // Note the space before %c to consume the newline character

    printf("Enter stringValue: ");
    scanf(" %99s", stringValue); // Note the 99 to prevent buffer overflow

    printf("\n");

    printf("shortValue: %hd\n", shortValue);
    printf("intValue: %d\n", intValue);
    printf("longValue: %ld\n", longValue);
    printf("longLongValue: %lld\n", longLongValue);
    printf("floatValue: %f\n", floatValue);
    printf("doubleValue: %lf\n", doubleValue);
    printf("longDoubleValue: %Lf\n", longDoubleValue);
    printf("charValue: %c\n", charValue);
    printf("stringValue: %s\n", stringValue);
    
    return 0;
}
