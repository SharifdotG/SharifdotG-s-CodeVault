#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;

    while (cin >> number && number != 0) {
        int sumOfDigits = 0;
        int sumOfDigitsOfProduct = 0;

        int temp = number;

        while (temp != 0) {
            sumOfDigits += temp % 10;
            temp /= 10;
        }

        int product = 11;

        while (sumOfDigits != sumOfDigitsOfProduct) {
            sumOfDigitsOfProduct = 0;
            temp = number * product;
            
            while (temp != 0) {
                sumOfDigitsOfProduct += temp % 10;
                temp /= 10;
            }

            product++;
        }

        cout << product - 1 << endl;
    }

    return 0;
}
