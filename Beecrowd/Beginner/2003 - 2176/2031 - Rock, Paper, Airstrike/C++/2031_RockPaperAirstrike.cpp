#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        string player1, player2;
        cin >> player1 >> player2;

        if (player1 == "ataque" && player2 == "pedra")
            cout << "Jogador 1 venceu" << endl;
        else if (player1 == "pedra" && player2 == "ataque")
            cout << "Jogador 2 venceu" << endl;
        else if (player1 == "pedra" && player2 == "papel")
            cout << "Jogador 1 venceu" << endl;
        else if (player1 == "papel" && player2 == "pedra")
            cout << "Jogador 2 venceu" << endl;
        else if (player1 == "papel" && player2 == "ataque")
            cout << "Jogador 2 venceu" << endl;
        else if (player1 == "ataque" && player2 == "papel")
            cout << "Jogador 1 venceu" << endl;
        else if (player1 == "papel" && player2 == "papel")
            cout << "Ambos venceram" << endl;
        else if (player1 == "pedra" && player2 == "pedra")
            cout << "Sem ganhador" << endl;
        else if (player1 == "ataque" && player2 == "ataque")
            cout << "Aniquilacao mutua" << endl;
    }

    return 0;
}
