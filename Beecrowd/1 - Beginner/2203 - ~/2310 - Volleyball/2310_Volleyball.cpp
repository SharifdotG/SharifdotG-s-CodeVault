#include <bits/stdc++.h>

using namespace std;

int main() {
    int players;
    cin >> players;

    int totalServes = 0, totalBlocks = 0, totalAttacks = 0;
    int totalServesOpponent = 0, totalBlocksOpponent = 0, totalAttacksOpponent = 0;

    while (players--) {
        string name;
        cin >> name;

        int serves, blocks, attacks;
        cin >> serves >> blocks >> attacks;

        int servesOpponent, blocksOpponent, attacksOpponent;
        cin >> servesOpponent >> blocksOpponent >> attacksOpponent;
        
        totalServes += serves;
        totalBlocks += blocks;
        totalAttacks += attacks;

        totalServesOpponent += servesOpponent;
        totalBlocksOpponent += blocksOpponent;
        totalAttacksOpponent += attacksOpponent;
    }

    cout << "Pontos de Saque: " << fixed << setprecision(2) << (double) totalServesOpponent / totalServes * 100 << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << (double) totalBlocksOpponent / totalBlocks * 100 << " %." << endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << (double) totalAttacksOpponent / totalAttacks * 100 << " %." << endl;

    return 0;
}