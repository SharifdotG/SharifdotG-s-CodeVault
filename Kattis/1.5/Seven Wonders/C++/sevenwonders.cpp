#include <bits/stdc++.h>

using namespace std;

int main() {
    string cards;
    cin >> cards;

    int t = 0, c = 0, g = 0;

    for (char card : cards) {
        if (card == 'T') t++;
        else if (card == 'C') c++;
        else g++;
    }

    cout << t * t + c * c + g * g + min(t, min(c, g)) * 7 << endl;

    return 0;
}