#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    getline(cin, word);

    for (int i = 0; i < word.length(); i++) {
        if (islower(word[i])) {
            word[i] = toupper(word[i]);
        } else if (isupper(word[i])) {
            word[i] = tolower(word[i]);
        }
    }

    cout << word << endl;
    
    return 0;
}