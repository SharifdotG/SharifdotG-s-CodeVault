#include <bits/stdc++.h>

using namespace std;

int main() {
    string guestName, hostName, pileOfLetters;
    cin >> guestName >> hostName >> pileOfLetters;

    string combinedName = guestName + hostName;

    sort(combinedName.begin(), combinedName.end());
    sort(pileOfLetters.begin(), pileOfLetters.end());

    if (combinedName == pileOfLetters) cout << "YES";
    else cout << "NO";

    return 0;
}