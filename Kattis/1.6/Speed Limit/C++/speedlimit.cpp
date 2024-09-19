#include <bits/stdc++.h>

using namespace std;

int main() {
    int dataSet;

    while (cin >> dataSet && dataSet != -1) {
        int totalTime = 0;
        int prevTime = 0;

        for (int i = 0; i < dataSet; i++) {
            int speed, time;
            cin >> speed >> time;

            totalTime += speed * (time - prevTime);
            prevTime = time;
        }

        cout << totalTime << " miles" << endl;
    }

    return 0;
}
