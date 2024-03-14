#include <bits/stdc++.h>

using namespace std;

int main() {
    string name;
    getline(cin, name);

    if (name.length() <= 80) {
        cout << "YES" << endl;
    } else cout << "NO" << endl;

    return 0;
}