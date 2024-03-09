#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    string word;
    cin >> testCases;

    while (testCases--) {
        cin >> word;

        cout << fixed << setprecision(2) << word.length() * 0.01 << endl;
    }

    return 0;
}