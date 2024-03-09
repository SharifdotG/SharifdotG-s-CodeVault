#include <stdio.h>
#include <math.h>

int main() {
    int fiddlesticksX, fiddlesticksY, invaderX, invaderY, invaderSpeed, castingRadius, crowRadius;

    while (scanf("%d %d %d %d %d %d %d", &fiddlesticksX, &fiddlesticksY, &invaderX, &invaderY, &invaderSpeed, &castingRadius, &crowRadius) == 7) {
        double distance = sqrt(pow(invaderX - fiddlesticksX, 2) + pow(invaderY - fiddlesticksY, 2)) + invaderSpeed * 1.5;
        double range = castingRadius + crowRadius;

        if (distance <= range) {
            printf("Y\n");
        } else printf("N\n");
    }

    return 0;
}
