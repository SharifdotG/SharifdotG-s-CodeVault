#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long ducks;

    while (cin >> ducks) {
        if (ducks == -1) break;
        
        if (ducks == 0) {
            cout << 0 << endl;
        } else cout << ducks - 1 << endl;
    }

    return 0;
}