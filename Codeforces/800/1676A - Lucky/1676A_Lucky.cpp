#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string sixDigits;
        cin >> sixDigits;

        int first3Sum = 0, last3Sum = 0;

        for (int i = 0; i < 6; i++) {
            if (i < 3) first3Sum += sixDigits[i];
            else last3Sum += sixDigits[i];
        }

        if (first3Sum == last3Sum) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}