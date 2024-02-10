#include <bits/stdc++.h>

using namespace std;

int main() {
    string setOfLetters;
    getline(cin, setOfLetters);

    int letters[26] = {0};
    int count = 0;

    for (int i = 0; i < setOfLetters.length(); i++) {
        if (setOfLetters[i] >= 'a' && setOfLetters[i] <= 'z') {
            letters[setOfLetters[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (letters[i] > 0) count++;
    }

    cout << count;

    return 0;
}