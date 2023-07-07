#include <stdio.h>

int main() {
    int week_number;

    printf("Enter week number (1-7): ");
    scanf("%d", &week_number);

    if (week_number == 1) {
        printf("Sunday");
    } else if (week_number == 2) {
        printf("Monday");
    } else if (week_number == 3) {
        printf("Tuesday");
    } else if (week_number == 4) {
        printf("Wednesday");
    } else if (week_number == 5) {
        printf("Thursday");
    } else if (week_number == 6) {
        printf("Friday");
    } else if (week_number == 7) {
        printf("Saturday");
    } else {
        printf("Invalid Input");
    }

    return 0;
}