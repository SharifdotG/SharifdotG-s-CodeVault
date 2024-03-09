#include <bits/stdc++.h>

using namespace std;

int main() {
    int number1, number2;

    while (cin >> number1 >> number2 && number1 > 0 && number2 > 0) {
        int sum = 0;

        if (number1 > number2) swap(number1, number2);

        for (int i = number1; i <= number2; i++) {
            cout << i << " ";
            sum += i;
        }

        cout << "Sum=" << sum << endl;
    }
    
    return 0;
}