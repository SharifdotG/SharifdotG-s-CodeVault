#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    getline(cin, word);

    int vowelCount = 0;

    for (int i = 0; i < word.size(); i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' ||
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' ||
            word[i] == 'U') vowelCount++;
    }

    cout << vowelCount << endl;

    return 0;
}