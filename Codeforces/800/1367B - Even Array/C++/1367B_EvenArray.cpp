#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arraySize;
        cin >> arraySize;

        int array[arraySize];

        for (int i = 0; i < arraySize; i++) cin >> array[i];

        int even = 0, odd = 0;

        for (int i = 0; i < arraySize; i++) {
            if (i % 2 == 0 && array[i] % 2 != 0) even++;
            else if (i % 2 != 0 && array[i] % 2 == 0) odd++;
        }

        if (even == odd) cout << even << endl;
        else cout << -1 << endl;
    }

    return 0;
}