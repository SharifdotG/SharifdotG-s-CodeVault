#include <bits/stdc++.h>

using namespace std;

int main() {
    string cardDeck;

    while (cin >> cardDeck, cardDeck != "-") {
        int shuffles, takenCards;
        cin >> shuffles;

        for (int i = 0; i < shuffles; i++) {
            cin >> takenCards;
            cardDeck = cardDeck.substr(takenCards) + cardDeck.substr(0, takenCards);
        }

        cout << cardDeck << endl;
    }
    
    return 0;
}