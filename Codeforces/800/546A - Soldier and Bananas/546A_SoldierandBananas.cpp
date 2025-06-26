#include <bits/stdc++.h>

using namespace std;

int main() {
    int costOfBanana, numberOfDollar, numberOfBananaWants;
    cin >> costOfBanana >> numberOfDollar >> numberOfBananaWants;

    int totalCost = 0;

    for (int i = 1; i <= numberOfBananaWants; i++) {
        totalCost += i * costOfBanana;
    }

    if (totalCost > numberOfDollar) {
        cout << totalCost - numberOfDollar;
    } else {
        cout << 0;
    }
    
    return 0;
}