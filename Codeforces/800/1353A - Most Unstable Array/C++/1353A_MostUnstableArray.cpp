#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arrayLength, arraySum;
        cin >> arrayLength >> arraySum;

        if (arrayLength == 1) {
            cout << 0 << endl;
        } else if (arrayLength == 2) {
            cout << arraySum << endl;
        } else cout << arraySum * 2 << endl;
    }
    
    return 0;
}