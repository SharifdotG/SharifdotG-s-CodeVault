#include <bits/stdc++.h>

using namespace std;

int main() {
    int month;
    cin >> month;

    if (month == 2) {
        cout << "28" << endl;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "30" << endl;
    } else {
        cout << "31" << endl;
    }

    return 0;
}