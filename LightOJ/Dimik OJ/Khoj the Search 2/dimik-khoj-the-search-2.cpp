#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string text, pattern;
        cin >> text >> pattern;

        int count = 0;
        size_t nPos = text.find(pattern, 0);
        while (nPos != string::npos) {
            count++;
            nPos = text.find(pattern, nPos + 1);
        }

        cout << count << endl;
    }

    return 0;
}