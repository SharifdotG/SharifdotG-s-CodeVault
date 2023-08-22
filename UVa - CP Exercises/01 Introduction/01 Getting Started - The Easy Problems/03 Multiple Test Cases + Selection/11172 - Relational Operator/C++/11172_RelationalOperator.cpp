#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, a, b;

    cin >> testCases;

    while (testCases--) {
        cin >> a >> b;

        if (a < b) {
            cout << "<" << endl;
        } else if (a > b) {
            cout << ">" << endl;
        } else {
            cout << "=" << endl;
        }
    }
    
    return 0;
}