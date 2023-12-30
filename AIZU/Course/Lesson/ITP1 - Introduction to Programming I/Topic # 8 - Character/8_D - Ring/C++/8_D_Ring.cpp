#include <bits/stdc++.h>

using namespace std;

int main() {
    string text, pattern;
    cin >> text >> pattern;

    text += text;

    if (text.find(pattern) != string::npos) {
        cout << "Yes" << endl;
    } else cout << "No" << endl;
    
    return 0;
}