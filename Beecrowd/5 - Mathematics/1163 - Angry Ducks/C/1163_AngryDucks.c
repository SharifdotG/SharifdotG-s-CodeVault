#include <math.h>
#include <stdio.h>

#define PI 3.14159
#define GRAVITY 9.80665

int main() {
    double initialHeight;

    while (scanf("%lf", &initialHeight) != EOF) {
        int numShots;
        double minDistance, maxDistance;
        scanf("%lf %lf %d", &minDistance, &maxDistance, &numShots);

        for (int i = 0; i < numShots; i++) {
            double angleDegrees, initialSpeed;
            scanf("%lf %lf", &angleDegrees, &initialSpeed);

            double angleRadians = angleDegrees * PI / 180;

            double horizontalSpeed = initialSpeed * cos(angleRadians);
            double verticalSpeed = initialSpeed * sin(angleRadians);

            double timeToRise = verticalSpeed / GRAVITY;

            double maxHeight =
                (verticalSpeed * verticalSpeed) / (2 * GRAVITY) + initialHeight;

            double finalVerticalSpeed = sqrt(2 * GRAVITY * maxHeight);

            double timeToFall = finalVerticalSpeed / GRAVITY;

            double totalTime = timeToRise + timeToFall;

            double horizontalDistance = horizontalSpeed * totalTime;

            if (horizontalDistance > minDistance &&
                horizontalDistance < maxDistance) {
                printf("%.5lf -> DUCK\n", horizontalDistance);
            } else {
                printf("%.5lf -> NUCK\n", horizontalDistance);
            }
        }
    }

    return 0;
}
