#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    while (number >= 10) {
        int product = 1;

        while (number > 0) {
            int digit = number % 10;
            number /= 10;

            if (digit != 0) {
                product *= digit;
            }
        }

        number = product;
    }

    cout << number << endl;

    return 0;
}
