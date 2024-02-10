#include <bits/stdc++.h>

using namespace std;

int main() {
    int gold, silver, copper;
    cin >> gold >> silver >> copper;

    int buyingPower = gold * 3 + silver * 2 + copper;

    if (buyingPower >= 8) {
        cout << "Province or ";
    } else if (buyingPower >= 5) {
        cout << "Duchy or ";
    } else if (buyingPower >= 2) {
        cout << "Estate or ";
    }

    if (buyingPower >= 6) {
        cout << "Gold";
    } else if (buyingPower >= 3) {
        cout << "Silver";
    } else {
        cout << "Copper";
    }

    return 0;
}