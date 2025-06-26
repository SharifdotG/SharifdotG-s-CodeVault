#include <bits/stdc++.h>

using namespace std;

int main() {
    int start, end, divisor;
    cin >> start >> end >> divisor;

    int beautifulDays = 0;
    for (int i = start; i <= end; i++) {
        int reversed = 0, number = i;
        while (number > 0) {
            reversed = reversed * 10 + number % 10;
            number /= 10;
        }

        if (abs(i - reversed) % divisor == 0) {
            beautifulDays++;
        }
    }

    cout << beautifulDays << endl;

    return 0;
}