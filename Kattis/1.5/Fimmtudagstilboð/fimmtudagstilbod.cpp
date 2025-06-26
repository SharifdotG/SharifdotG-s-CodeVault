#include <bits/stdc++.h>

using namespace std;

int main() {
    int oldYear = 2020;
    int oldPrice = 1000;

    int newYear;
    cin >> newYear;

    if (newYear <= 2020) {
        cout << oldPrice << endl;
    } else {
        cout << oldPrice + ((newYear - oldYear) * 100) << endl;
    }

    return 0;
}