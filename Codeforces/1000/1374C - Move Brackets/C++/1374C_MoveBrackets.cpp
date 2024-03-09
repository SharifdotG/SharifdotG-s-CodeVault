#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string brackets;
        int number;
        cin >> number >> brackets;

        int moves = 0, count = 0;

        for (int i = 0; i < number; i++) {
            if (brackets[i] == '(') {
                count++;
            } else count--;

            if (count < 0) {
                moves++, count = 0;
            }
        }

        cout << moves << endl;
    }
    
    return 0;
}