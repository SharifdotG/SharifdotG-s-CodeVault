#include <stdio.h>

int main() {
    int hotDogs, participants;
    scanf("%d %d", &hotDogs, &participants);

    printf("%.2lf\n", (double) hotDogs / participants);

    return 0;
}
