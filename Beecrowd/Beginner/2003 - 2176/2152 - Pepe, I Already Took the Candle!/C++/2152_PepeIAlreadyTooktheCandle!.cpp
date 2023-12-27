#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int hour, minute, event;

        cin >> hour >> minute >> event;

        if (hour < 10) {
            cout << "0" << hour;
        } else cout << hour;

        cout << ":";

        if (minute < 10) {
            cout << "0" << minute;
        } else cout << minute;

        if (event == 1) {
            cout << " - A porta abriu!" << endl;
        } else cout << " - A porta fechou!" << endl;
    }

    return 0;
}