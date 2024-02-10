#include <bits/stdc++.h>

using namespace std;

int main() {
    string firstWord, secondWord;
    cin >> firstWord >> secondWord;

    for (int i = 0; i < firstWord.length(); i++) {
        firstWord[i] = tolower(firstWord[i]);
        secondWord[i] = tolower(secondWord[i]);
    }

    if (firstWord < secondWord) {
        cout << -1;
    } else if (firstWord > secondWord) {
        cout << 1;
    } else {
        cout << 0;
    }
    
    return 0;
}