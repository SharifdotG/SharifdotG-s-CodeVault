#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string s;
        cin >> s;

        if (s == "6" || s == "28" || s == "496" || s == "8128" ||
            s == "33550336" || s == "8589869056" || s == "137438691328" ||
            s == "2305843008139952128") {
            cout << "YES, " << s << " is a perfect number!" << endl;
        } else {
            cout << "NO, " << s << " is not a perfect number!" << endl;
        }
    }

    return 0;
}