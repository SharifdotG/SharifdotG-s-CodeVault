#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    stringstream ss(input);

    string word;
    vector<string> words;

    while (ss >> word) words.push_back(word);

    sort(words.begin(), words.end());

    for (int i = 0; i < words.size() - 1; i++) {
        if (words[i] == words[i + 1]) {
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;

    return 0;
}