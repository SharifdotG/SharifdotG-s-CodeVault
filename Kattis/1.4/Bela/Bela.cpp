#include <bits/stdc++.h>

using namespace std;

int main() {
    int hands, score = 0;
    char dominant;
    cin >> hands >> dominant;

    for (int i = 0; i < hands * 4; i++) {
        string card;
        cin >> card;

        if (card[1] == dominant) {
            switch (card[0]) {
                case 'A':
                    score += 11;
                    break;
                case 'K':
                    score += 4;
                    break;
                case 'Q':
                    score += 3;
                    break;
                case 'J':
                    score += 20;
                    break;
                case 'T':
                    score += 10;
                    break;
                case '9':
                    score += 14;
                    break;
                case '8':
                    score += 0;
                    break;
                case '7':
                    score += 0;
                    break;
            }
        } else {
            switch (card[0]) {
                case 'A':
                    score += 11;
                    break;
                case 'K':
                    score += 4;
                    break;
                case 'Q':
                    score += 3;
                    break;
                case 'J':
                    score += 2;
                    break;
                case 'T':
                    score += 10;
                    break;
                case '9':
                    score += 0;
                    break;
                case '8':
                    score += 0;
                    break;
                case '7':
                    score += 0;
                    break;
            }
        }
    }

    cout << score << endl;

    return 0;
}