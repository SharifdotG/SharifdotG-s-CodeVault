#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int stops, passengers = 0;
        cin >> stops;

        while (stops--) {
            passengers *= 2; // As 2x passengers get off
            passengers++;
        }

        cout << passengers << endl;
    }

    return 0;
}
