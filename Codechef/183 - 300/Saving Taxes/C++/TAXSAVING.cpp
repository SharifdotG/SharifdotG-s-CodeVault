#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, amountEarned, taxAmount;
    cin >> testCases;

    while (testCases--) {
        cin >> amountEarned >> taxAmount;
        cout << amountEarned - taxAmount << endl;
    }
    
    return 0;
}