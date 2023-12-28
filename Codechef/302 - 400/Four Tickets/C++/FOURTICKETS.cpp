#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int ticketCost;
        cin >> ticketCost;

        if (ticketCost * 4 <= 1000) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }
    
    return 0;
}