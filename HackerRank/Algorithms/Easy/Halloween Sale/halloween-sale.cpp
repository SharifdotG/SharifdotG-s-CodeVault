#include <bits/stdc++.h>

using namespace std;

int main() {
    int price, discount, minPrice, money;
    cin >> price >> discount >> minPrice >> money;

    int games = 0;
    while (money >= price) {
        money -= price;
        price = max(price - discount, minPrice);
        games++;
    }

    cout << games << endl;

    return 0;
}