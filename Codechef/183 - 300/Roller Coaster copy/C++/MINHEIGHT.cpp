#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int chefsSonHeight, minimumHeight;
        cin >> chefsSonHeight >> minimumHeight;

        if (chefsSonHeight >= minimumHeight) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}