#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int n;
        cin >> n;

        vector<string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }

        sort(words.begin(), words.end());

        for (int i = 0; i < n; i++) {
            cout << words[i] << endl;
        }
    }
    
    return 0;
}