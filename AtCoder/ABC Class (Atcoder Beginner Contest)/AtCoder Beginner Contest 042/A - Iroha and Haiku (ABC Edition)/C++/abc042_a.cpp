#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 5 && b == 5 && c == 7) {
        cout << "YES" << endl;
    } else if (a == 5 && b == 7 && c == 5) {
        cout << "YES" << endl;
    } else if (a == 7 && b == 5 && c == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}