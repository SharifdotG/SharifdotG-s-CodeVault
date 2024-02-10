#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int number;
        cin >> number;

        int zeros = 0;
        for (int i = 5; i <= number; i *= 5) {
            zeros += number / i;
        }

        cout << zeros << endl;
    }
    
    return 0;
}