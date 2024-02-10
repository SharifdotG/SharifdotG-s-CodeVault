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
