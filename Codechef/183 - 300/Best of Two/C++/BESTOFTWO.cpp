#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int firstAttempt, secondAttempt;
        cin >> firstAttempt >> secondAttempt;

        if (firstAttempt > secondAttempt) {
            cout << firstAttempt << endl;
        } else {
            cout << secondAttempt << endl;
        }
    }
    
    return 0;
}