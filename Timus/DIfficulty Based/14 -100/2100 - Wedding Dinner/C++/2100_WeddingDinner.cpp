#include <bits/stdc++.h>

using namespace std;

int main() {
    int friends, dinnerCost = 2;
    cin >> friends;

    while (friends--) {
        string response;
        cin >> response;

        int nonInvite = response.find("+one");

        if (nonInvite != -1) {
            dinnerCost += 2;
        } else dinnerCost++;
    }

    if (dinnerCost == 13) {
        dinnerCost++;
    }

    cout << dinnerCost * 100 << endl;
    
    return 0;
}