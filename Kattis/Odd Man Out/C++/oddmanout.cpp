#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        int guests;
        cin >> guests;

        int guestList[guests];
        for (int j = 0; j < guests; j++) {
            cin >> guestList[j];
        }

        sort(guestList, guestList + guests);

        int oddManOut;
        for (int j = 0; j < guests; j += 2) {
            if (guestList[j] != guestList[j + 1]) {
                oddManOut = guestList[j];
                break;
            }
        }

        cout << "Case #" << i << ": " << oddManOut << endl;
    }

    return 0;
}