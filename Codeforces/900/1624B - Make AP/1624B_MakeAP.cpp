#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int tempA, tempB, tempC;

        tempA = 2 * b - a;

        if ((a + c) % 2 == 0) tempB = (a + c) / 2;
        else tempB = 0;

        tempC = 2 * b - c;

        if (tempA % c == 0 && tempA > 0 ||
            tempB % b == 0 && tempB > 0 ||
            tempC % a == 0 && tempC > 0) {
                cout << "YES" << endl;
            } else cout << "NO" << endl;
    }
    
    return 0;
}