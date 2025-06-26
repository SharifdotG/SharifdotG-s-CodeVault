#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int numberOfOutlets;
        cin >> numberOfOutlets;

        int numberOfPlugs = 0;

        for (int j = 0; j < numberOfOutlets; j++) {
            int numberOfPlugsInOutlet;
            cin >> numberOfPlugsInOutlet;

            numberOfPlugs += numberOfPlugsInOutlet;
        }

        cout << numberOfPlugs - numberOfOutlets + 1 << endl;
    }

    return 0;
}
