#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int fiveSeater, sevenSeater;
        cin >> fiveSeater >> sevenSeater;

        cout << fiveSeater * 5 + sevenSeater * 7 << endl;
    }
    
    return 0;
}