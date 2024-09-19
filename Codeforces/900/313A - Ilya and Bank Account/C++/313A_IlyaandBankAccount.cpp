#include <bits/stdc++.h>

using namespace std;

int main() {
    long long bankAccountState;
    cin >> bankAccountState;

    if (bankAccountState >= 0) cout << bankAccountState << endl;
    else {
        cout << max(bankAccountState / 10, bankAccountState / 100 * 10 + bankAccountState % 10) << endl;
    }
    
    return 0;
}