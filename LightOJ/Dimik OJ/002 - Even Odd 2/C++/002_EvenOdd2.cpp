#include <bits/stdc++.h>

using namespace std;

int main() {
    long long testCases, number;
    cin >> testCases;

    while (testCases--) {
        string numberString;
        cin >> numberString;

        if (numberString[numberString.length() - 1] % 2 == 0) cout << "even" << endl;
        else cout << "odd" << endl;
    }
    
    return 0;
}