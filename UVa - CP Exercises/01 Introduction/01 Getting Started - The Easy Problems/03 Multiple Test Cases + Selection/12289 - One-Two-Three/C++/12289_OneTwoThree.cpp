#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    string words;

    cin >> testCases;

    while (testCases--) {
        cin >> words;

        if (words.length() == 5) {
            cout << 3 << endl;
        } else {
            if ((words[0] == 'o' && words[1] == 'n') || (words[0] == 'o' && words[2] == 'e') || (words[1] == 'n' && words[2] == 'e')) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
    }
    
    return 0;
}