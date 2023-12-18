#include <bits/stdc++.h>

using namespace std;

int main() {
    string binary;
    cin >> binary;

    int count = 0;

    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '1') count++;
    }

    if (count % 2 == 0) cout << binary << "0" << endl;
    else cout << binary << "1" << endl;

    return 0;
}