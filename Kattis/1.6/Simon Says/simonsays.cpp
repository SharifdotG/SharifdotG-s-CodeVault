#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();

    while (testCases--) {
        string line;
        getline(cin, line);

        if (line.length() >= 10 && line.substr(0, 10) == "Simon says") {
            cout << line.substr(10) << endl;
        }
    }

    return 0;
}