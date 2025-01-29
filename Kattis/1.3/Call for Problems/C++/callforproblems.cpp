#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int excludedCount = 0;
    for (int i = 0; i < n; ++i) {
        int difficulty;
        cin >> difficulty;
        
        if (difficulty % 2 != 0) {
            excludedCount++;
        }
    }

    cout << excludedCount << endl;

    return 0;
}