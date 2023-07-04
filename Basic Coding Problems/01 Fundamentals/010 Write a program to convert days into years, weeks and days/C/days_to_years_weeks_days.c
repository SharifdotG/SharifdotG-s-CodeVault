#include <stdio.h>

int main() {
    int number_of_days;
    int years;
    int weeks;
    int remaining_days;

    printf("Enter the number of days: ");
    scanf("%d", &number_of_days);

    years = number_of_days / 365;
    remaining_days = number_of_days % 365;
    weeks = remaining_days / 7;
    remaining_days = remaining_days % 7;

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", remaining_days);

    return 0;
}