#include <bits/stdc++.h>

using namespace std;

int cards[1010];

int main() {
    int strength = 0;

    for (int i = 0; i < 5; i++) {
        string card;
        cin >> card;

        cards[card[0]]++;

        strength = max(strength, cards[card[0]]);
    }

    cout << strength << endl;

    return 0;
}