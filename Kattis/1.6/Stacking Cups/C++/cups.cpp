#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfCups;
    cin >> numberOfCups;

    vector<pair<int, string>> cups;

    for (int i = 0; i < numberOfCups; i++) {
        string token1, token2; // both tokens are either "color radius" or "diameter color"
        cin >> token1 >> token2;
        
        if (isdigit(token1[0])) {
            cups.push_back(make_pair(stoi(token1) / 2, token2));
        } else {
            cups.push_back(make_pair(stoi(token2), token1));
        }
    }

    sort(cups.begin(), cups.end());

    for (auto cup : cups) {
        cout << cup.second << endl;
    }

    return 0;
}
