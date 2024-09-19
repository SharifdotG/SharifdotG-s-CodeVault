#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int stores;
        cin >> stores;

        int min = 100;
        int max = 0;

        for (int j = 0; j < stores; j++) {
            int storePosition;
            cin >> storePosition;

            if (storePosition < min) min = storePosition;
            if (storePosition > max) max = storePosition;
        }

        cout << (max - min) * 2 << endl;
    }

    return 0;
}
