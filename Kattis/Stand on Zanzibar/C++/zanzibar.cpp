#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int turtle, turtles[100], turtleCount = 0;
        cin >> turtle;

        while (turtle != 0) {
            turtles[turtleCount++] = turtle;
            cin >> turtle;
        }

        int total = 0;
        
        for (int i = 1; i < turtleCount; i++) {
            if (turtles[i] > 2 * turtles[i - 1]) {
                total += turtles[i] - 2 * turtles[i - 1];
            }
        }

        cout << total << endl;
    }

    return 0;
}