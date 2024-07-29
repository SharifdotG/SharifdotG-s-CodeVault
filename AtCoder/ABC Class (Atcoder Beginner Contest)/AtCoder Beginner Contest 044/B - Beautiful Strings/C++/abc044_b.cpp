#include <bits/stdc++.h>

using namespace std;

int main() {
    string w;
    cin >> w;
    
    map<char, int> freq;
    for (char c : w) {
        freq[c]++;
    }

    for (auto p : freq) {
        if (p.second % 2 != 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    
    return 0;
}