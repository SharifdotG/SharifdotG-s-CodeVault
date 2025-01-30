#include <bits/stdc++.h>

using namespace std;

int main() {
    char x;
    cin >> x;

    if (isalpha(x)) {
        cout << "ALPHA" << endl;
        if (isupper(x)) {
            cout << "IS CAPITAL" << endl;
        } else {
            cout << "IS SMALL" << endl;
        }
    } else if (isdigit(x)) {
        cout << "IS DIGIT" << endl;
    }
    
    return 0;
}