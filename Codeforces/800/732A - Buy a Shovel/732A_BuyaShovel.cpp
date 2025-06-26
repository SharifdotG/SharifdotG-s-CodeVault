#include <bits/stdc++.h>

using namespace std;

int main() {
    int priceOfOneShovel, denominationOfTheCoin;
    cin >> priceOfOneShovel >> denominationOfTheCoin;

    int shovels = 1;
    int price = priceOfOneShovel;

    while (price % 10 != 0 && price % 10 != denominationOfTheCoin) {
        shovels++;
        price += priceOfOneShovel;
    }

    cout << shovels;

    return 0;
}