#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfBattles;
    cin >> numberOfBattles;

    int numberOfWins = 0;

    for (int i = 0; i < numberOfBattles; i++) {
        string battle;
        cin >> battle;

        if (battle.find("CD") == string::npos) {
            numberOfWins++;
        }
    }

    cout << numberOfWins << endl;

    return 0;
}
