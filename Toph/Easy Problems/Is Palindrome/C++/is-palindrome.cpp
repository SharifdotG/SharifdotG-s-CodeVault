#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    string reversed = s;
    reverse(reversed.begin(), reversed.end());

    cout << (s == reversed ? "Yes" : "No") << endl;

    return 0;
}