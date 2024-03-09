#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int firstNumber, secondNumber, thirdNumber;
        cin >> firstNumber >> secondNumber >> thirdNumber;

        if (firstNumber + secondNumber == thirdNumber || secondNumber + thirdNumber == firstNumber || thirdNumber + firstNumber == secondNumber) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}