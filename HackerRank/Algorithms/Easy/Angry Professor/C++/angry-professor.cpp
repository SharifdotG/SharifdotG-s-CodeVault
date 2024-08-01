#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int students, threshold;
        cin >> students >> threshold;

        int onTime = 0;
        for (int j = 0; j < students; j++) {
            int arrival;
            cin >> arrival;

            if (arrival <= 0) {
                onTime++;
            }
        }

        if (onTime < threshold) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}