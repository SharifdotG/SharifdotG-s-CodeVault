#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        char letter;
        cin >> letter;
        
        if (letter == 'c' || letter == 'o' || letter == 'd' || letter == 'e' || letter == 'f' || letter == 'r' || letter == 's') cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}