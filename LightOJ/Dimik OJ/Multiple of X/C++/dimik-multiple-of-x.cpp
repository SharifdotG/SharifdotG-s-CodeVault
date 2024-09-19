#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        string sentence;
        getline(cin >> ws, sentence);

        string word = "";
        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == ' ') {
                reverse(word.begin(), word.end());
                cout << word << " ";
                word = "";
            } else {
                word += sentence[i];
            }
        }

        reverse(word.begin(), word.end());

        cout << word << endl;
    }
    
    return 0;
}