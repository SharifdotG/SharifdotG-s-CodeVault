#include <bits/stdc++.h>

using namespace std;

int main() {
    int strength, number;
    cin >> strength >> number;

    vector<pair<int, int>> dragons(number);

    for (int i = 0; i < number; i++) {
        cin >> dragons[i].first >> dragons[i].second;
    }

    sort(dragons.begin(), dragons.end());

    bool canWin = true;

    for (int i = 0; i < number; i++) {
        if (strength > dragons[i].first) {
            strength += dragons[i].second;
        } else {
            canWin = false;
            break;
        }
    }

    if (canWin) {
        cout << "YES" << endl;
    } else cout << "NO" << endl;
    
    return 0;
}