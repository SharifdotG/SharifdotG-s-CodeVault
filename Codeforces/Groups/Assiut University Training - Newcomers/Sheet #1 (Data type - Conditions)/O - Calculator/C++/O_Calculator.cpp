#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    char s;
    cin >> a >> s >> b;

    if (s == '+') {
        cout << a + b << endl;
    } else if (s == '-') {
        cout << a - b << endl;
    } else if (s == '*') {
        cout << a * b << endl;
    } else if (s == '/') {
        cout << a / b << endl;
    }
    
    return 0;
}