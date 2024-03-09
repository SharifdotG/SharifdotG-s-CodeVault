#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int burles;
        cin >> burles;

        int coins1 = burles / 3;
        int coins2 = burles / 3;

        if (burles % 3 == 1) coins1++;
        else if (burles % 3 == 2) coins2++;

        cout << coins1 << " " << coins2 << endl;
    }

    return 0;
}