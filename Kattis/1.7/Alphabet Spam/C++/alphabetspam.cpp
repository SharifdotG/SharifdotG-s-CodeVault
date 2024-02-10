#include <bits/stdc++.h>

using namespace std;

int main() {
    string spamWord;
    cin >> spamWord;

    int whitespace = 0, lowercase = 0, uppercase = 0, symbols = 0;
    
    for (int i = 0; i < spamWord.length(); i++) {
        if (spamWord[i] == '_') whitespace++;
        else if (islower(spamWord[i])) lowercase++;
        else if (isupper(spamWord[i])) uppercase++;
        else symbols++;
    }

    cout << (double) whitespace / spamWord.length() << endl;
    cout << (double) lowercase / spamWord.length() << endl;
    cout << (double) uppercase / spamWord.length() << endl;
    cout << (double) symbols / spamWord.length() << endl;

    return 0;
}