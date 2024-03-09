#include <bits/stdc++.h>

using namespace std;

int main() {
    int characters;
    char character[128][128];

    while (cin >> characters) {
        for (int i = 0; i < 5; i++) {
            cin >> character[i];
        }

        for (int i = 0; i < 4 * characters; i += 4) {
            if (character[0][i] == '.') {
                cout << 1;
            } else if (character[3][i] == '*') {
                cout << 2;
            } else cout << 3;
        }
        
        cout << endl;
    }
    
    return 0;
}