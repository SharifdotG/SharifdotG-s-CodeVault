#include <bits/stdc++.h>

using namespace std;

int main() {
    int banks, debentures;

    while (cin >> banks >> debentures && banks != 0 && debentures != 0) {
        int reserves[banks];

        for (int i = 0; i < banks; i++) {
            cin >> reserves[i];
        }

        for (int i = 0; i < debentures; i++) {
            int debtor, creditor, value;
            cin >> debtor >> creditor >> value;

            reserves[debtor - 1] -= value;
            reserves[creditor - 1] += value;
        }

        bool bailout = true;
        for (int i = 0; i < banks; i++) {
            if (reserves[i] < 0) {
                bailout = false;
                break;
            }
        }

        if (bailout) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    
    return 0;
}