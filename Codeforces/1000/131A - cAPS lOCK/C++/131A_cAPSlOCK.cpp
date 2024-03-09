#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;

    bool allCaps = true;

    for (int i = 1; i < word.length(); i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            allCaps = false;
            break;
        }
    }

    if (allCaps) {
        for (int i = 0; i < word.length(); i++) {
            if (word[i] >= 'a' && word[i] <= 'z') {
                word[i] = word[i] - 'a' + 'A';
            } else {
                word[i] = word[i] - 'A' + 'a';
            }
        }
    }

    cout << word << endl;
    
    return 0;
}