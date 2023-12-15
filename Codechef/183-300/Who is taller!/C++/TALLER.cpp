#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int aliceHeight, bobHeight;
        cin >> aliceHeight >> bobHeight;

        if (aliceHeight > bobHeight) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    }
    
    return 0;
}