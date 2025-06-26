#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    int sum = 0;
    int temp = number;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (number % sum == 0) {
        cout << number << endl;
    } else {
        while (number % sum != 0) {
            number++;

            sum = 0;
            temp = number;

            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
        }

        cout << number << endl;
    }

    return 0;
}