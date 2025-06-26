#include <bits/stdc++.h>

using namespace std;

int main() {
    string firstNumber, secondNumber;
    cin >> firstNumber >> secondNumber;

    reverse(firstNumber.begin(), firstNumber.end());
    reverse(secondNumber.begin(), secondNumber.end());

    if (firstNumber > secondNumber) cout << firstNumber << endl;
    else cout << secondNumber << endl;

    return 0;
}