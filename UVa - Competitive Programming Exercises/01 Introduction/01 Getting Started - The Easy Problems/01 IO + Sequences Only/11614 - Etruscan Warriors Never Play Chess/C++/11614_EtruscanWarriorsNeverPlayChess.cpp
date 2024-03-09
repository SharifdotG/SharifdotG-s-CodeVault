#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        long long numberOfEtruscanWarriors;
        cin >> numberOfEtruscanWarriors;

        long long numberOfRows = (-1 + sqrt(1 + 8 * numberOfEtruscanWarriors)) / 2;
        cout << numberOfRows << endl;
    }
    
    return 0;
}