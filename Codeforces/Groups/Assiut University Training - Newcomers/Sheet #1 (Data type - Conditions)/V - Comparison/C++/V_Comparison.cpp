#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    char s;
    cin >> a >> s >> b;

    if (s == '>') {
        cout << (a > b ? "Right" : "Wrong") << endl;
    } else if (s == '<') {
        cout << (a < b ? "Right" : "Wrong") << endl;
    } else {
        cout << (a == b ? "Right" : "Wrong") << endl;
    }
    
    return 0;
}