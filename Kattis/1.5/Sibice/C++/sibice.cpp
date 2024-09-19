#include <bits/stdc++.h>

using namespace std;

int main() {
    int matches, width, height;
    cin >> matches >> width >> height;

    int maxLength = sqrt(pow(width, 2) + pow(height, 2));

    while (matches--) {
        int matchLength;
        cin >> matchLength;

        if (matchLength <= maxLength) cout << "DA" << endl;
        else cout << "NE" << endl;
    }

    return 0;
}