#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, target, currentScore;
    cin >> testCases;

    while (testCases--) {
        cin >> target >> currentScore;
        cout << target - currentScore << endl;
    }
    
    return 0;
}