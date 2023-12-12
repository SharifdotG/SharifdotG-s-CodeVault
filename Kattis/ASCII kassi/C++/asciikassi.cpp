#include <bits/stdc++.h>

using namespace std;

int main() {
    int sideLength;
    cin >> sideLength;

    if (sideLength == 0) {
        cout << "++" << endl << "++" << endl;

        return 0;
    }

    cout << '+';

    for (int i = 0; i < sideLength; ++i) {
        cout << '-';
    }
    
    cout << '+' << endl;

    for (int i = 0; i < sideLength; ++i) {
        cout << '|';

        for (int j = 0; j < sideLength; ++j) {
            cout << ' ';
        }

        cout << '|' << endl;
    }

    cout << '+';
    
    for (int i = 0; i < sideLength; ++i) {
        cout << '-';
    }

    cout << '+' << endl;

    return 0;
}