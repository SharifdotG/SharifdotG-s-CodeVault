#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    
    int d = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            char c;
            cin >> c;

            if (c == '*') {
                d = i + j + 1;
                cout << d << endl;
                return 0;
            }
        }
    }

    return 0;
}