#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number, minMoves = 0;
        cin >> number;

        while (number % 6 == 0) {
            number /= 6;
            minMoves++;
        }

        while (number % 3 == 0) {
            number /= 3;
            minMoves += 2;
        }

        if (number == 1) cout << minMoves << endl;
        else cout << -1 << endl;
    }
    
    return 0;
}