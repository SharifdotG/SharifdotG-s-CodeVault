#include <bits/stdc++.h>

using namespace std;

int main() {
    int clouds, jump, energy = 100;
    cin >> clouds >> jump;

    vector<int> c(clouds);
    for (int i = 0; i < clouds; i++) {
        cin >> c[i];
    }
    
    for (int i = jump % clouds; i != 0; i = (i + jump) % clouds) {
        energy -= c[i] * 2 + 1;
    }

    cout << energy - c[0] * 2 - 1 << endl;

    return 0;
}