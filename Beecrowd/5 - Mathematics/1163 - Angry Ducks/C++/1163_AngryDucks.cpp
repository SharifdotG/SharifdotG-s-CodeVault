#include <bits/stdc++.h>

using namespace std;

#define PI 3.14159
#define GRAVITY 9.80665

int main() {
    double initialHeight;

    while (cin >> initialHeight) {
        int numShots;
        double minDistance, maxDistance;
        cin >> minDistance >> maxDistance >> numShots;

        for (int i = 0; i < numShots; i++) {
            double angleDegrees, initialSpeed;
            cin >> angleDegrees >> initialSpeed;

            double angleRadians = angleDegrees * PI / 180;

            double horizontalSpeed, verticalSpeed;
            horizontalSpeed = initialSpeed * cos(angleRadians);
            verticalSpeed = initialSpeed * sin(angleRadians);

            double timeToRise;
            timeToRise = verticalSpeed / GRAVITY;

            double maxHeight;
            maxHeight =
                (verticalSpeed * verticalSpeed) / (2 * GRAVITY) + initialHeight;

            double finalVerticalSpeed;
            finalVerticalSpeed = sqrt(2 * GRAVITY * maxHeight);

            double timeToFall;
            timeToFall = finalVerticalSpeed / GRAVITY;

            double totalTime;
            totalTime = timeToRise + timeToFall;

            double horizontalDistance;
            horizontalDistance = horizontalSpeed * totalTime;

            if (horizontalDistance > minDistance &&
                horizontalDistance < maxDistance)
                cout << fixed << setprecision(5) << horizontalDistance
                     << " -> DUCK" << endl;
            else
                cout << fixed << setprecision(5) << horizontalDistance
                     << " -> NUCK" << endl;
        }
    }

    return 0;
}
