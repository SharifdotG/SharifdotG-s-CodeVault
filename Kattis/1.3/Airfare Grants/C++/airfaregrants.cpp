#include <bits/stdc++.h>

using namespace std;

int main() {
    int flights;
    cin >> flights;

    vector<int> prices(flights);
    for (int i = 0; i < flights; i++) {
        cin >> prices[i];
    }

    int maxPrice = *max_element(prices.begin(), prices.end());
    int minPrice = *min_element(prices.begin(), prices.end());

    int reimbursementLimit = maxPrice / 2;
    int netCost = minPrice - min(minPrice, reimbursementLimit);

    cout << netCost << endl;

    return 0;
}