#include <bits/stdc++.h>

using namespace std;

int main() {
    char c;
    cin >> c;

    if (c == 'z') {
        cout << 'a' << endl;
    } else {
        cout << ++c << endl;
    }
    
    return 0;
}