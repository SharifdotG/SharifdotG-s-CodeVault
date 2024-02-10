#include <bits/stdc++.h>

using namespace std;

int main() {
    int height, fixedFactor, velocity, strength, distance = 0;
    cin >> height >> fixedFactor >> velocity >> strength;

    while (height > 0) {
        velocity += strength;
        velocity -= max(1, velocity / 10);

        if (velocity >= fixedFactor) height++;

        if (velocity > 0 && velocity < fixedFactor) {
            height --;

            if (height == 0) velocity = 0;
        }

        if (velocity <= 0) {
            height = 0;
            velocity = 0;
        }

        distance += velocity;

        if (strength > 0) strength--;
    }

    cout << distance << endl;

    return 0;
}