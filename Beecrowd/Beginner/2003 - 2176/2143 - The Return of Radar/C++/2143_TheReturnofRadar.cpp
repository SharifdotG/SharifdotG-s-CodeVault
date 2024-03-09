#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;

    while (cin >> testCases) {
        if (testCases == 0) break;

        while (testCases--) {
            int people;
            cin >> people;

            if (people % 2 == 0) {
                cout << (people - 2) * 2 + 2 << endl;
            } else cout << (people - 1) * 2 + 1 << endl;
        }
    }

    return 0;
}