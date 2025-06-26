#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int yearsPassed;
        cin >> yearsPassed;

        if (yearsPassed < 2015) {
            cout << 2015 - yearsPassed << " D.C." << endl;
        } else cout << yearsPassed - 2014 << " A.C." << endl;
    }

    return 0;
}