#include <bits/stdc++.h>

using namespace std;

int main() {
    string cardLabel;
    cin >> cardLabel;

    bool cardLabelsSeen[4][13] = {false};

    for (int i = 0; i < cardLabel.length(); i += 3) {
        int suit = 0;
        int rank = 0;

        switch (cardLabel[i]) {
            case 'P':
                suit = 0;
                break;
            case 'K':
                suit = 1;
                break;
            case 'H':
                suit = 2;
                break;
            case 'T':
                suit = 3;
                break;
        }

        rank = (cardLabel[i + 1] - '0') * 10 + (cardLabel[i + 2] - '0') - 1;

        if (cardLabelsSeen[suit][rank]) {
            cout << "GRESKA" << endl;
            return 0;
        }

        cardLabelsSeen[suit][rank] = true;
    }

    int cardLabelsSeenCount[4] = {0};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (cardLabelsSeen[i][j]) {
                cardLabelsSeenCount[i]++;
            }
        }
    }

    cout << 13 - cardLabelsSeenCount[0] << " " << 13 - cardLabelsSeenCount[1] << " " << 13 - cardLabelsSeenCount[2] << " " << 13 - cardLabelsSeenCount[3] << endl;

    return 0;
}
