#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();

    vector<string> sentences;

    while (testCases--) {
        string sentence;
        getline(cin, sentence);

        string vowels, consonants;
        for (char c : sentence) {
            if (c == ' ') {
                continue;
            }
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowels += c;
            } else {
                consonants += c;
            }
        }

        sentences.push_back(vowels);
        sentences.push_back(consonants);
    }

    for (string sentence : sentences) {
        cout << sentence << endl;
    }

    return 0;
}