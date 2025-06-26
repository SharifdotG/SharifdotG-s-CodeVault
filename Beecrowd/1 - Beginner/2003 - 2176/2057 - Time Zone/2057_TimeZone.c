#include <stdio.h>

int main() {
    int timeOfDeparture, travelTime, timeZone;
    scanf("%d %d %d", &timeOfDeparture, &travelTime, &timeZone);

    int result = timeOfDeparture + travelTime + timeZone;

    if (result < 0) result += 24;
    else if (result >= 24) {
        result -= 24;
    }

    printf("%d\n", result);

    return 0;
}
