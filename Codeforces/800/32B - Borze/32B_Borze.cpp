#include <bits/stdc++.h>

using namespace std;

int main() {
    string borzeCode;
    cin >> borzeCode;

    for (int i = 0; i < borzeCode.length(); i++) {
        if (borzeCode[i] == '.') cout << 0;
        else if (borzeCode[i] == '-' && borzeCode[i + 1] == '.') {
            cout << 1;
            i++;
        } else if (borzeCode[i] == '-' && borzeCode[i + 1] == '-') {
            cout << 2;
            i++;
        }
    }

    cout << endl;

    return 0;
}