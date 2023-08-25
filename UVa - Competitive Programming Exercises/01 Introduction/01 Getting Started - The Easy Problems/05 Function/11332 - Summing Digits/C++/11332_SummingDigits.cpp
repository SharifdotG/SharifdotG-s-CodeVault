#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;

    while (cin >> number && number != 0) {
        int sum = 0;

        while (number > 0) {
            sum += number % 10;
            number /= 10;

            if (number == 0 && sum > 9) {
                number = sum;
                sum = 0;
            }
        }

        cout << sum << endl;
    }
    
    return 0;
}