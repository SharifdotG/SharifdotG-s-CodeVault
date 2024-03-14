#include <bits/stdc++.h>

using namespace std;

int main() {
    int products;
    cin >> products;

    vector<int> product(products), quantity(products);

    for (int i = 0; i < products; i++) {
        cin >> product[i] >> quantity[i];
    }

    double total = 0;

    for (int i = 0; i < products; i++) {
        if (product[i] == 1001) {
            total += 1.50 * quantity[i];
        } else if (product[i] == 1002) {
            total += 2.50 * quantity[i];
        } else if (product[i] == 1003) {
            total += 3.50 * quantity[i];
        } else if (product[i] == 1004) {
            total += 4.50 * quantity[i];
        } else if (product[i] == 1005) {
            total += 5.50 * quantity[i];
        }
    }

    cout << fixed << setprecision(2) << total << endl;

    return 0;
}
