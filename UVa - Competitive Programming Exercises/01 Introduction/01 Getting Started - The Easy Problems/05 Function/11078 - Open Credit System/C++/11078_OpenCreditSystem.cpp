#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int numberOfStudents, maxDifference = -1000000;
        cin >> numberOfStudents;

        int a[numberOfStudents];
        for (int i = 0; i < numberOfStudents; i++) cin >> a[i];

        int maxValue = a[0];

        for (int i = 1; i < numberOfStudents; i++) {
            maxDifference = max(maxDifference, maxValue - a[i]);
            maxValue = max(maxValue, a[i]);
        }

        cout << maxDifference << endl;
    }
    
    return 0;
}