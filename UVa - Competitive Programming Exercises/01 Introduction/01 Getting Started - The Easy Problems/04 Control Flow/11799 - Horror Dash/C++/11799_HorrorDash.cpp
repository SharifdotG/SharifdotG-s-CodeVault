#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, numberOfStudents, speed, max;

    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        cin >> numberOfStudents;

        max = 0;

        for (int j = 0; j < numberOfStudents; j++) {
            cin >> speed;

            if (speed > max) {
                max = speed;
            }
        }

        cout << "Case " << i << ": " << max << endl;
    }
    
    return 0;
}