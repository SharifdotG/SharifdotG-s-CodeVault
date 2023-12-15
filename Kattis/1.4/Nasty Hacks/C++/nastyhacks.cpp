#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int revenueIfNoAdvert, revenueIfAdvert, costOfAdvert;
        cin >> revenueIfNoAdvert >> revenueIfAdvert >> costOfAdvert;

        if (revenueIfAdvert - costOfAdvert > revenueIfNoAdvert) {
            cout << "advertise" << endl;
        } else if (revenueIfAdvert - costOfAdvert == revenueIfNoAdvert) {
            cout << "does not matter" << endl;
        } else {
            cout << "do not advertise" << endl;
        }
    }

    return 0;
}