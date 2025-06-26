#include <bits/stdc++.h>

using namespace std;

int main() {
    int number1, number2, sum = 0;
    cin >> number1 >> number2;

    if (number1 > number2) swap(number1, number2);

    for (int i = number1 + 1; i < number2; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    cout << sum << endl;
    
    return 0;
}