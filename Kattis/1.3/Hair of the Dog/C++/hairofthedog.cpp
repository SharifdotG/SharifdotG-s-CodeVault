#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> days(n);
    for (int i = 0; i < n; i++) {
        cin >> days[i];
    }

    int hangoverDays = 0;
    for (int i = 1; i < n - 1; i++) {
        if (days[i] == "drunk" && days[i + 1] == "sober") {
            hangoverDays++;
        }
    }

    cout << hangoverDays << endl;

    return 0;
}