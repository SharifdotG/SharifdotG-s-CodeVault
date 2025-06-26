#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    vector<string> perfectNumbers = {
        "6",        "28",         "496",          "8128",
        "33550336", "8589869056", "137438691328", "2305843008139952128"};

    while (testCases--) {
        unsigned long long n;
        cin >> n;

        if (n >= 6) {
            cout << perfectNumbers[0] << endl;
        }
        if (n >= 28) {
            cout << perfectNumbers[1] << endl;
        }
        if (n >= 496) {
            cout << perfectNumbers[2] << endl;
        }
        if (n >= 8128) {
            cout << perfectNumbers[3] << endl;
        }
        if (n >= 33550336) {
            cout << perfectNumbers[4] << endl;
        }
        if (n >= 8589869056) {
            cout << perfectNumbers[5] << endl;
        }
        if (n >= 137438691328) {
            cout << perfectNumbers[6] << endl;
        }
        if (n >= 2305843008139952128) {
            cout << perfectNumbers[7] << endl;
        }

        cout << endl;
    }

    return 0;
}