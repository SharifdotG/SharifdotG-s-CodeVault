#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, arrayLength;
    cin >> testCases;

    while (testCases--) {
        cin >> arrayLength;

        int array[arrayLength], count = 0, index = 0;

        for (int i = 0; i < arrayLength; i++) {
            cin >> array[i];
        }

        for (int i = 1; i < arrayLength - 1; i++) {
            if (array[i] != array[i - 1] && array[i] != array[i + 1]) {
                count++;
                index = i + 1;
            }
        }

        if (array[0] != array[1] && array[0] != array[arrayLength - 1]) {
            count++;
            index = 1;
        }

        if (array[arrayLength - 1] != array[arrayLength - 2] && array[arrayLength - 1] != array[0]) {
            count++;
            index = arrayLength;
        }

        if (count == 1) {
            cout << index << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}