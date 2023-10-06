#include <bits/stdc++.h>

using namespace std;

int main() {
    int inter = 0, gremio = 0, draw = 0, grenais = 0;

    while (true) {
        int i, g;
        cin >> i >> g;

        if (i > g) inter++;
        else if (i < g) gremio++;
        else draw++;

        grenais++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;

        int option;
        cin >> option;

        if (option == 2) break;
    }

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << draw << endl;

    if (inter > gremio) cout << "Inter venceu mais" << endl;
    else if (inter < gremio) cout << "Gremio venceu mais" << endl;
    else cout << "Nao houve vencedor" << endl;
    
    return 0;
}