#include <bits/stdc++.h>

using namespace std;

int main() {
    int horseShoes[4];
    cin >> horseShoes[0] >> horseShoes[1] >> horseShoes[2] >> horseShoes[3];

    sort(horseShoes, horseShoes + 4);

    int numberOfHorseShoes = 0;

    for (int i = 0; i < 3; i++) {
        if (horseShoes[i] == horseShoes[i + 1]) {
            numberOfHorseShoes++;
        }
    }

    cout << numberOfHorseShoes;
    
    return 0;
}