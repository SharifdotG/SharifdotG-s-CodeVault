#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, rows, columns;

    cin >> testCases;

    while (testCases--) {
        cin >> rows >> columns;

        cout << (rows / 3) * (columns / 3) << endl;
    }
    
    return 0;
}