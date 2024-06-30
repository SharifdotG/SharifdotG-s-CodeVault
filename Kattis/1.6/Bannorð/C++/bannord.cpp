#include <bits/stdc++.h>

using namespace std;

int main() {
    string forbiddenLetters;
    getline(cin, forbiddenLetters);
    
    string memo;
    getline(cin, memo);
    
    unordered_set<char> forbiddenSet(
        forbiddenLetters.begin(), forbiddenLetters.end()
    );
    
    stringstream ss(memo);
    string word;
    bool firstWord = true;
    
    while (ss >> word) {
        bool isForbidden = false;
        
        for (char c : word) {
            if (forbiddenSet.count(c)) {
                isForbidden = true;
                break;
            }
        }
        
        if (isForbidden) {
            word.assign(word.size(), '*');
        }
        
        if (!firstWord) {
            cout << " ";
        }

        cout << word;
        firstWord = false;
    }
    
    cout << endl;
    
    return 0;
}
