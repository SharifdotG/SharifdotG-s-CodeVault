#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        long long number;
        cin >> number;

        if (number % 2 == 0) {
            while (number % 2 == 0) {
                number /= 2;
            }
        }

        if (number == 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}