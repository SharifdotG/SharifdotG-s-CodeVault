#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arraySize, maxSwaps;
        cin >> arraySize >> maxSwaps;

        int arrayA[arraySize], arrayB[arraySize];

        for (int i = 0; i < arraySize; i++) cin >> arrayA[i];

        for (int i = 0; i < arraySize; i++) cin >> arrayB[i];

        sort(arrayA, arrayA + arraySize);
        sort(arrayB, arrayB + arraySize, greater<int>());

        int sum = 0;

        for (int i = 0; i < arraySize; i++) {
            if (i < maxSwaps && arrayA[i] < arrayB[i]) sum += arrayB[i];
            else sum += arrayA[i];
        }

        cout << sum << endl;
    }

    return 0;
}