#include <bits/stdc++.h>

using namespace std;

int main() {
    int arrayLength;
    cin >> arrayLength;

    if (arrayLength % 2 == 1) {
        cout << -1 << endl;
    } else {
        for (int i = 1; i <= arrayLength; i++) {
            if (i % 2 == 1) {
                cout << i + 1 << " ";
            } else {
                cout << i - 1 << " ";
            }
        }
    }
    
    return 0;
}