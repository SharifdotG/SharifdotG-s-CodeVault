#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arrayLength;
        cin >> arrayLength;

        int array[arrayLength], count = 0;
        for (int i = 0; i < arrayLength; i++) {
            cin >> array[i];

            if (array[i] % 2 != 0) {
                count++;
            }
        }

        if (count % 2 == 0) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }

    return 0;
}