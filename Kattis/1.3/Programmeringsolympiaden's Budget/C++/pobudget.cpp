#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long total = 0;
    for (int i = 0; i < n; i++) {
        string description;
        long long k;
        cin >> description >> k;
        
        total += k;
    }

    if (total > 0) {
        cout << "Usch, vinst" << endl;
    } else if (total == 0) {
        cout << "Lagom" << endl;
    } else {
        cout << "Nekad" << endl;
    }

    return 0;
}