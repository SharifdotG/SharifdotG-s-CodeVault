#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number;
        cin >> number;

        int firstDigit = number / 10000;
        int lastDigit = number % 10;

        cout << "Sum = " << firstDigit + lastDigit << endl;
    }
    
    return 0;
}