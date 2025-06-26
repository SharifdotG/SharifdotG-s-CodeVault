#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        string word;
        cin >> word;

        if (i % 2 != 0) cout << word << endl;
    }

    return 0;
}