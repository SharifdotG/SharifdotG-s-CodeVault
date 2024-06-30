#include <bits/stdc++.h>

using namespace std;

int main() {
    long long highJumps, currentRecord, previousRecord, records = 0;
    cin >> highJumps >> currentRecord >> previousRecord;

    while (highJumps--) {
        long long height;
        cin >> height;

        if (height > currentRecord + previousRecord) {
            records++;
        }
    }

    cout << records << endl;

    return 0;
}