#include <bits/stdc++.h>

using namespace std;

int main() {
    string actualWord, guessedWord;
    cin >> actualWord >> guessedWord;

    set<char> actualLetters;
    for (int i = 0; i < actualWord.length(); i++) {
        actualLetters.insert(actualWord[i]);
    }

    int wrongGuesses = 0;

    for (int i = 0; i < guessedWord.length(); i++) {
        if (actualLetters.find(guessedWord[i]) == actualLetters.end()) {
            wrongGuesses++;
        } else {
            actualLetters.erase(actualLetters.find(guessedWord[i]));
        }

        if (wrongGuesses == 10 || actualLetters.size() == 0) {
            break;
        }
    }
    
    if (wrongGuesses == 10) {
        cout << "LOSE" << endl;
    } else {
        cout << "WIN" << endl;
    }

    return 0;
}
