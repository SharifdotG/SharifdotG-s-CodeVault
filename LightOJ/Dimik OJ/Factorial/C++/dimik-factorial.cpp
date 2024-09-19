#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int number;
        cin >> number;

        long long factorial = 1;
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }

        cout << factorial << endl;
    }
    
    return 0;
}