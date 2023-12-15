#include <bits/stdc++.h>

using namespace std;

int main() {
    string name;
    getline(cin, name);

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) cout << "VEIT EKKI" << endl;
    else if (c < 0) cout << "JEDI" << endl;
    else if (c > 0) cout << "SITH" << endl;

    return 0;
}