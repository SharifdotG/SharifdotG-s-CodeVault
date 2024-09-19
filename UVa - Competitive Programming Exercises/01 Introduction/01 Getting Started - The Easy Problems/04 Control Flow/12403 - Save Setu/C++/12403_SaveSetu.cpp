#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, money, total = 0;
    string action;

    cin >> testCases;

    while (testCases--) {
        cin >> action;

        if (action == "donate") {
            cin >> money;
            total += money;
        } else {
            cout << total << endl;
        }
    }
    
    return 0;
}