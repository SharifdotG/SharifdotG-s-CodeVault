#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    string names[testCases];
    for (int i = 0; i < testCases; i++) {
        cin >> names[i];
    }

    bool increasing = true, decreasing = true;

    for (int i = 0; i < testCases - 1; i++) {
        if (names[i] < names[i + 1]) {
            decreasing = false;
        } else if (names[i] > names[i + 1]) {
            increasing = false;
        }
    }

    if (increasing) cout << "INCREASING" << endl;
    else if (decreasing) cout << "DECREASING" << endl;
    else cout << "NEITHER" << endl;

    return 0;
}
