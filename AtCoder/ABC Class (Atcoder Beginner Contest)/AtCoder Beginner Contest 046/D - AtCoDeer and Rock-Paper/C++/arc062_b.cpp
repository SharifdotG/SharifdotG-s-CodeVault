#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size(), win = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (s[i] == 'p') {
                win--;
            }
        } else {
            if (s[i] == 'g') {
                win++;
            }
        }
    }

    cout << win << endl;
    
    return 0;
}