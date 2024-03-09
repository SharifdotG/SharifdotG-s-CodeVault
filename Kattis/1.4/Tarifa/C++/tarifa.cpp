#include <bits/stdc++.h>

using namespace std;

int main() {
    int megabytes, months;
    cin >> megabytes >> months;

    int totalMegabytes = megabytes * (months + 1);

    for (int i = 0; i < months; i++) {
        int megabytesUsed;
        cin >> megabytesUsed;

        totalMegabytes -= megabytesUsed;
    }

    cout << totalMegabytes << endl;

    return 0;
}