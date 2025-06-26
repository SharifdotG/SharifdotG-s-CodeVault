#include <bits/stdc++.h>

using namespace std;

int main() {
    int number1, number2;

    while (cin >> number1 >> number2 && number1 != 0 && number2 != 0) {
        cout << number1 / number2 << " " << number1 % number2 << " / " << number2 << endl;
    }

    return 0;
}
