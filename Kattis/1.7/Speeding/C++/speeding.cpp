#include <bits/stdc++.h>

using namespace std;

int main() {
    int photographs;
    cin >> photographs;

    int previousTime, previousDistance, maxSpeed = 0;
    cin >> previousTime >> previousDistance;

    for (int i = 1; i < photographs; i++) {
        int currentTime, currentDistance;
        cin >> currentTime >> currentDistance;

        int speed = (currentDistance - previousDistance) / (currentTime - previousTime);
        
        if (speed > maxSpeed) maxSpeed = speed;

        previousTime = currentTime;
        previousDistance = currentDistance;
    }

    cout << maxSpeed << endl;

    return 0;
}
