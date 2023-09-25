/**
 * @file DaysConversion.c
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Days Conversion in C
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {
    int days;

    printf("Enter days: ");
    scanf("%d", &days);

    printf("Years: %d\n", days / 365);
    printf("Remaining Months: %d\n", (days % 365) / 30);
    printf("Remaining Weeks: %d\n", ((days % 365) % 30) / 7);
    printf("Remaining Days: %d\n", ((days % 365) % 30) % 7);

    return 0;
}
