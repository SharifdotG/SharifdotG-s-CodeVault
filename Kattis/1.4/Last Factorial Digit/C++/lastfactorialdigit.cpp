#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number;
        cin >> number;

        int factorial = 1;
        
        for (int j = 1; j <= number; j++) {
            factorial *= j;
        }

        string lastFactorialDigit = to_string(factorial);
        cout << lastFactorialDigit[lastFactorialDigit.length() - 1] << endl;
    }

    return 0;
}