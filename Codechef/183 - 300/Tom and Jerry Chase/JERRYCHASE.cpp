#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int jerrySpeed, tomSpeed;
        cin >> jerrySpeed >> tomSpeed;

        if (jerrySpeed < tomSpeed) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}