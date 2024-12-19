#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int problems;
        cin >> problems;

        cout << problems / 2 << " " << problems - problems / 2 << endl;
    }

    return 0;
}