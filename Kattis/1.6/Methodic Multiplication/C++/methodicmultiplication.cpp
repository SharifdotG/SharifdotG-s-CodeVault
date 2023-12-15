#include <bits/stdc++.h>

using namespace std;

int main() {
    string peanoArithmetic1, peanoArithmetic2, product = "";
    cin >> peanoArithmetic1 >> peanoArithmetic2;

    int output, temp;
    output = (peanoArithmetic1.length() / 3) * (peanoArithmetic2.length() / 3);
    temp = output;

    while (temp--) {
        product += "S(";
    }

    product += "0";

    while (output--) {
        product += ")";
    }

    cout << product << endl;

    return 0;
}
