#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int integers;
        cin >> integers;

        int i = 1;

        while (integers > 0) {
            if (i % 3 != 0 && i % 10 != 3) integers--;

            i++;
        }

        cout << i - 1 << endl;
    }

    return 0;
}