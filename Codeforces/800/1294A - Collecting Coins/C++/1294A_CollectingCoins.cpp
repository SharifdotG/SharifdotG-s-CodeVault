#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int aliceCoins, barbaraCoins, cereneCoins, polycarpCoins;
        cin >> aliceCoins >> barbaraCoins >> cereneCoins >> polycarpCoins;

        int totalCoins = aliceCoins + barbaraCoins + cereneCoins + polycarpCoins;
        if (totalCoins % 3 != 0) cout << "NO" << endl;
        else {
            int averageCoins = totalCoins / 3;
            if (aliceCoins > averageCoins || barbaraCoins > averageCoins || cereneCoins > averageCoins) cout << "NO" << endl;
            else cout << "YES" << endl;
        }

    }
    
    return 0;
}