#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if (a < b + c && b < a + c && c < a + b) {
        cout << "S" << endl;
    } else if (a < b + d && b < a + d && d < a + b) {
        cout << "S" << endl;
    } else if (a < c + d && c < a + d && d < a + c) {
        cout << "S" << endl;
    } else if (b < c + d && c < b + d && d < b + c) {
        cout << "S" << endl;
    } else cout << "N" << endl;

    return 0;
}