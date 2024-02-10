#include <bits/stdc++.h>

using namespace std;

int main() {
    int card1, card2;
    cin >> card1 >> card2;

    if (card1 == card2) cout << card1 << endl;
    else if (card1 > card2) cout << card1 << endl;
    else cout << card2 << endl;

    return 0;
}