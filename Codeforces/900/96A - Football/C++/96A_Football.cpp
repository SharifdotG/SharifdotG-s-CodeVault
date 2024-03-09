#include <bits/stdc++.h>

using namespace std;

int main() {
    string players;
    cin >> players;

    int consecutivePlayers = 1;
    char lastPlayer = players[0];
    bool isDangerous = false;

    for (int i = 1; i < players.length(); i++) {
        if (players[i] == lastPlayer) consecutivePlayers++;
        else {
            consecutivePlayers = 1;
            lastPlayer = players[i];
        }

        if (consecutivePlayers == 7) {
            isDangerous = true;
            break;
        }
    }

    if (isDangerous) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}