#include <bits/stdc++.h>

using namespace std;

int main() {
    int kthDragon, lthDragon, mthDragon, nthDragon, dDragon, count = 0;
    cin >> kthDragon >> lthDragon >> mthDragon >> nthDragon >> dDragon;

    for (int i = 1; i <= dDragon; i++) {
        if (i % kthDragon == 0 || i % lthDragon == 0 || i % mthDragon == 0 || i % nthDragon == 0) {
            count++;
        }
    }

    cout << count;

    return 0;
}