#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfItems;
    cin >> numberOfItems;

    vector<string> missingItems, essentialItems = {"keys", "phone", "wallet"};
    set<string> items;

    while (numberOfItems--) {
        string item;
        cin >> item;

        items.insert(item);
    }

    for (string essentialItem : essentialItems) {
        if (items.find(essentialItem) == items.end()) {
            missingItems.push_back(essentialItem);
        }
    }

    if (missingItems.empty()) {
        cout << "ready" << endl;
    } else {
        sort(missingItems.begin(), missingItems.end());

        for (string missingItem : missingItems) {
            cout << missingItem << endl;
        }
    }

    return 0;
}