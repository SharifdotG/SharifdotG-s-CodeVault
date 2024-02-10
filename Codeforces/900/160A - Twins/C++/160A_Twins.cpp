#include <bits/stdc++.h>

using namespace std;

int main() {
    int coins;
    cin >> coins;

    int coinValues[coins];
    int totalCoins = 0;
    for (int i = 0; i < coins; i++) {
        cin >> coinValues[i];
        totalCoins += coinValues[i];
    }

    sort(coinValues, coinValues + coins, greater<int>());

    int myCoins = 0;
    int myCoinsCount = 0;
    for (int i = 0; i < coins; i++) {
        myCoins += coinValues[i];
        myCoinsCount++;
        if (myCoins > totalCoins / 2) break;
    }

    cout << myCoinsCount << endl;
    
    return 0;
}