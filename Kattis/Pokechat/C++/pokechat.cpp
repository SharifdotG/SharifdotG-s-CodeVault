#include <bits/stdc++.h>

using namespace std;

int main() {
    string encoding;
    getline(cin, encoding);

    string pokemonID;
    cin >> pokemonID;

    int pokemonIDSize = pokemonID.size();
    string message = "";

    for (int i = 0; i < pokemonIDSize - 2; i += 3) {
        string index = "";
        
        for (int j = 0; j < 3; j++) index += pokemonID[i + j];

        message += encoding[stoi(index) - 1];
    }

    cout << message << endl;

    return 0;
}