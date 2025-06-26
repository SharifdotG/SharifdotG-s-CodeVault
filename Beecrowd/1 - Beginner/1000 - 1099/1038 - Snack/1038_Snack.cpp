#include <bits/stdc++.h>

using namespace std;

int main() {
    int code, quantity;
    cin >> code >> quantity;

    double prices[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    double price = prices[code - 1];

    cout << "Total: R$ " << fixed << setprecision(2) << price * quantity << endl;
    
    return 0;
}