#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if ((a[a.size() - 1] + b[b.size() - 1]) % 2 == 0) {
        cout << "Black" << endl;
    } else {
        cout << "White" << endl;
    }
    
    return 0;
}