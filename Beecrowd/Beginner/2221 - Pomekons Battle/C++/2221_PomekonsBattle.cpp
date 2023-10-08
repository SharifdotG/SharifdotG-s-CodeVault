#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int bonus;
        cin >> bonus;

        int attackDabriel, defenseDabriel, levelDabriel;
        cin >> attackDabriel >> defenseDabriel >> levelDabriel;

        int attackGuarte, defenseGuarte, levelGuarte;
        cin >> attackGuarte >> defenseGuarte >> levelGuarte;

        double dabriel = (attackDabriel + defenseDabriel) / 2.0;
        if (levelDabriel % 2 == 0) dabriel += bonus;

        double guarte = (attackGuarte + defenseGuarte) / 2.0;
        if (levelGuarte % 2 == 0) guarte += bonus;

        if (dabriel > guarte) cout << "Dabriel" << endl;
        else if (guarte > dabriel) cout << "Guarte" << endl;
        else cout << "Empate" << endl;
    }

    return 0;
}