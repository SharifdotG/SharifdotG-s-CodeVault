#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;

    int vowels = 0, vowelY = 0;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            vowels++;
        }
        
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y') {
            vowelY++;
        }
    }

    cout << vowels << " " << vowelY << endl;

    return 0;
}