#include <bits/stdc++.h>

using namespace std;

int main() {
    int givenCards;
    cin >> givenCards;

    bool cards[4][13] = {false};

    for (int i = 0; i < givenCards; i++) {
        char suit;
        int number;
        cin >> suit >> number;

        switch (suit) {
            case 'S':
                cards[0][number - 1] = true;
                break;
            case 'H':
                cards[1][number - 1] = true;
                break;
            case 'C':
                cards[2][number - 1] = true;
                break;
            case 'D':
                cards[3][number - 1] = true;
                break;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (!cards[i][j]) {
                switch (i) {
                    case 0:
                        cout << "S " << j + 1 << endl;
                        break;
                    case 1:
                        cout << "H " << j + 1 << endl;
                        break;
                    case 2:
                        cout << "C " << j + 1 << endl;
                        break;
                    case 3:
                        cout << "D " << j + 1 << endl;
                        break;
                }
            }
        }
    }
    
    return 0;
}