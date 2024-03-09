#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;

    int upperCase = 0;
    int lowerCase = 0;

    for (int i = 0; i < word.length(); i++) {
        if (isupper(word[i])) upperCase++;
        else lowerCase++;
    }

    if (upperCase > lowerCase) {
        for (int i = 0; i < word.length(); i++) {
            word[i] = toupper(word[i]);
        }
    } else {
        for (int i = 0; i < word.length(); i++) {
            word[i] = tolower(word[i]);
        }
    }

    cout << word;
    
    return 0;
}