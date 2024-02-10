#include <bits/stdc++.h>

using namespace std;

int main() {
    double amount;
    cin >> amount;

    int notes[6] = {100, 50, 20, 10, 5, 2};
    int coins[6] = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
        int note = notes[i];
        int quantity = amount / note;
        amount -= quantity * note;
        cout << quantity << " nota(s) de R$ " << fixed << setprecision(2) << note / 1.00 << endl;
    }

    amount *= 100;

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++) {
        int coin = coins[i];
        int quantity = amount / coin;
        amount -= quantity * coin;
        cout << quantity << " moeda(s) de R$ " << fixed << setprecision(2) << coin / 100.0 << endl;
    }
    
    return 0;
}