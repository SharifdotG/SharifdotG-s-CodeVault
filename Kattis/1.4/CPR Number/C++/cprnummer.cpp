#include <bits/stdc++.h>

using namespace std;

int main() {
    string cpr;
    cin >> cpr;

    int cprArray[11] = {4, 3, 2, 7, 6, 5, 0, 4, 3, 2, 1}, sum = 0;

    for (int i = 0; i < 11; i++) sum += (cpr[i] - 48) * cprArray[i];

    if (sum % 11 != 0) cout << "0" << endl;
    else cout << "1" << endl;

    return 0;
}