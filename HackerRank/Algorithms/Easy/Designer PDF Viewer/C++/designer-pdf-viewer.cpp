#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> heights(26);
    for (int i = 0; i < 26; i++) {
        cin >> heights[i];
    }

    string word;
    cin >> word;

    int maxHeight = 0;
    for (int i = 0; i < word.size(); i++) {
        maxHeight = max(maxHeight, heights[word[i] - 'a']);
    }

    cout << word.size() * maxHeight << endl;

    return 0;
}