#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, requiredDonations, collectedDonations;
    cin >> testCases;

    while (testCases--) {
        cin >> requiredDonations >> collectedDonations;
        cout << requiredDonations - collectedDonations << endl;
    }
    
    return 0;
}