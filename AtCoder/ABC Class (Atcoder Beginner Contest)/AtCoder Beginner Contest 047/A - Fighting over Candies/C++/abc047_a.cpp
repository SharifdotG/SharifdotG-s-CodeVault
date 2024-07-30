#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> candyPacks(3);
    for (int i = 0; i < 3; i++) {
        cin >> candyPacks[i];
    }

    sort(candyPacks.begin(), candyPacks.end());

    cout << (candyPacks[0] + candyPacks[1] == candyPacks[2] ? "Yes" : "No")
         << endl;

    return 0;
}