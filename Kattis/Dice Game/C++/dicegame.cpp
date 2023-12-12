#include <bits/stdc++.h>

using namespace std;

int main() {
    int a1, a2, a3, a4, b1, b2, b3, b4;
    cin >> a1 >> a2 >> a3 >> a4 >> b1 >> b2 >> b3 >> b4;

    int a = a1 + a2 + a3 + a4;
    int b = b1 + b2 + b3 + b4;

    if (a > b) cout << "Gunnar" << endl;
    else if (a < b) cout << "Emma" << endl;
    else cout << "Tie" << endl;

    return 0;
}
