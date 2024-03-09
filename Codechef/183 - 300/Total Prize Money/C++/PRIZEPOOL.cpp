#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int top10PrizeMoney, restPrizeMoney;
        cin >> top10PrizeMoney >> restPrizeMoney;

        cout << top10PrizeMoney * 10 + restPrizeMoney * 90 << endl;
    }
    
    return 0;
}