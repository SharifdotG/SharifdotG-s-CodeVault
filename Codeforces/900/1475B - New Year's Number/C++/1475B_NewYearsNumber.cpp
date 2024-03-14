#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number;
        cin >> number;

        int quotient = number / 2020;
        int remainder = number % 2020;

        if (quotient >= remainder) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}