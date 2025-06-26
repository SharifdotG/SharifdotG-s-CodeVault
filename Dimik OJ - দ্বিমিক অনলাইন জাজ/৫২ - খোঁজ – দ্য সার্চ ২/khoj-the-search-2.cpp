#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string text, pattern;
        cin >> text >> pattern;

        cout << text.find(pattern) << endl;
    }

    return 0;
}