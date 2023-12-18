#include <bits/stdc++.h>

using namespace std;

int main() {
    int player1Choice, player1Numbers, player2Numbers, ifPlayer1Cheated, player1Accused;
    cin >> player1Choice >> player1Numbers >> player2Numbers >> ifPlayer1Cheated >> player1Accused;

    if (ifPlayer1Cheated == 1 && player1Accused == 1) cout << "Jogador 2 ganha!" << endl;
    else if (ifPlayer1Cheated == 1 && player1Accused == 0) cout << "Jogador 1 ganha!" << endl;
    else if (ifPlayer1Cheated == 0 && player1Accused == 1) cout << "Jogador 1 ganha!" << endl;
    else {
        if (player1Choice == 1) {
            if ((player1Numbers + player2Numbers) % 2 == 0) cout << "Jogador 1 ganha!" << endl;
            else cout << "Jogador 2 ganha!" << endl;
        } else {
            if ((player1Numbers + player2Numbers) % 2 == 0) cout << "Jogador 2 ganha!" << endl;
            else cout << "Jogador 1 ganha!" << endl;
        }
    }

    return 0;
}
