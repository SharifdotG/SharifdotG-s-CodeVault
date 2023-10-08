#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        string sheldon, raj;
        cin >> sheldon >> raj;

        if (sheldon == "tesoura" && raj == "papel") cout << "Caso #" << i << ": Bazinga!" << endl;
        else if (sheldon == "papel" && raj == "pedra") cout << "Caso #" << i << ": Bazinga!" << endl;
        else if (sheldon == "pedra" && raj == "lagarto") cout << "Caso #" << i << ": Bazinga!" << endl;
        else if (sheldon == "lagarto" && raj == "Spock") cout << "Caso #" << i << ": Bazinga!" << endl;
        else if (sheldon == "Spock" && raj == "tesoura") cout << "Caso #" << i << ": Bazinga!" << endl;
        else if (sheldon == "tesoura" && raj == "lagarto") cout << "Caso #" << i << ": Bazinga!" << endl;
        else if (sheldon == "lagarto" && raj == "papel") cout << "Caso #" << i << ": Bazinga!" << endl;
        else if (sheldon == "papel" && raj == "Spock") cout << "Caso #" << i << ": Bazinga!" << endl;
        else if (sheldon == "Spock" && raj == "pedra") cout << "Caso #" << i << ": Bazinga!" << endl;
        else if (sheldon == "pedra" && raj == "tesoura") cout << "Caso #" << i << ": Bazinga!" << endl;
        else if (sheldon == raj) cout << "Caso #" << i << ": De novo!" << endl;
        else cout << "Caso #" << i << ": Raj trapaceou!" << endl;
    }

    return 0;
}