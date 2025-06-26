#include <bits/stdc++.h>

using namespace std;

int main() {
    int items, index, sum = 0, money;
    cin >> items >> index;

    vector<int> bill(items);
    for (int i = 0; i < items; i++) {
        cin >> bill[i];

        if (i != index) {
            sum += bill[i];
        }
    }

    cin >> money;
    if (sum / 2 == money) {
        cout << "Bon Appetit" << endl;
    } else {
        cout << money - sum / 2 << endl;
    }

    return 0;
}