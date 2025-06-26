#include <bits/stdc++.h>

using namespace std;

int main() {
    string arrangementOfCards;
    cin >> arrangementOfCards;

    bool correctGuess = true;

    for (int i = 0; i < arrangementOfCards.length(); i++) {
        for (int j = i + 1; j < arrangementOfCards.length(); j++) {
            if (arrangementOfCards[i] == arrangementOfCards[j]) {
                correctGuess = false;
            }
        }
    }

    if (correctGuess) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}