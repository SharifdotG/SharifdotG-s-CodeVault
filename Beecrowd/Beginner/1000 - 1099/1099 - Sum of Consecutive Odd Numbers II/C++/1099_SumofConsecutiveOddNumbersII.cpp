#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number1, number2;
        cin >> number1 >> number2;

        int sum = 0;

        if (number1 > number2) {
            for (int j = number2 + 1; j < number1; j++) {
                if (j % 2 != 0) {
                    sum += j;
                }
            }
        } else {
            for (int j = number1 + 1; j < number2; j++) {
                if (j % 2 != 0) {
                    sum += j;
                }
            }
        }

        cout << sum << endl;
    }
    
    return 0;
}