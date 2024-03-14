#include <bits/stdc++.h>

using namespace std;

int main() {
    int product1Code, product1Units, product2Code, product2Units;
    double product1Price, product2Price;

    cin >> product1Code >> product1Units >> product1Price;
    cin >> product2Code >> product2Units >> product2Price;

    double total = product1Units * product1Price + product2Units * product2Price;

    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << total << endl;
    
    return 0;
}