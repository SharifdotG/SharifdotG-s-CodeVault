#include <bits/stdc++.h>

using namespace std;

int main() {
    int slugs;

    while (cin >> slugs) {
        int maxSpeed = 0;

        for (int i = 0; i < slugs; i++) {
            int speed;
            cin >> speed;

            if (speed > maxSpeed) maxSpeed = speed;
        }

        if (maxSpeed < 10) cout << 1 << endl;
        else if (maxSpeed >= 10 && maxSpeed < 20) cout << 2 << endl;
        else cout << 3 << endl;
    }

    return 0;
}