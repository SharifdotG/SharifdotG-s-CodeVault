#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int days;
        cin >> days;
        
        string order;
        cin >> order;

        bool suspicious = false;

        for (int i = 0; i < days; i++) {
            if (order[i] != order[i + 1]) {
                for (int j = i + 2; j < days; j++) {
                    if (order[i] == order[j]) {
                        suspicious = true;
                        break;
                    }
                }
            }

            if (suspicious) break;
        }

        if (suspicious) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}