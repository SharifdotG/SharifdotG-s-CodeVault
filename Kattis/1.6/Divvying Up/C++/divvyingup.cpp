#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfContests;
    cin >> numberOfContests;

    int prizePurse[numberOfContests], totalPrize = 0;
    for (int i = 0; i < numberOfContests; i++) {
        cin >> prizePurse[i];
        totalPrize += prizePurse[i];
    }

    if (totalPrize % 3 == 0) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}
