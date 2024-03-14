#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    int luckyNumbers[] = {
        4, 7, 44, 47, 74, 77, 444, 447,
        474,477, 744, 747, 774, 777
    };

    for (int i = 0; i < 14; i++) {
        if (number % luckyNumbers[i] == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    
    return 0;
}