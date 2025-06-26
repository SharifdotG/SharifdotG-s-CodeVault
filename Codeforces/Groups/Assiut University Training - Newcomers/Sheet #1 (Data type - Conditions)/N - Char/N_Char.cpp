#include <bits/stdc++.h>

using namespace std;

int main() {
    char x;
    cin >> x;

    if (isupper(x)) {
        cout << (char)tolower(x) << endl;
    } else {
        cout << (char)toupper(x) << endl;
    }
    
    return 0;
}