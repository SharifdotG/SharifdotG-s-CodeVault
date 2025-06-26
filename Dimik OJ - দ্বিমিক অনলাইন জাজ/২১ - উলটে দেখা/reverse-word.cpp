#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string word;
        cin >> word;

        reverse(word.begin(), word.end());

        cout << word << endl;
    }

    return 0;
}