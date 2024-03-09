#include <bits/stdc++.h>

using namespace std;

int main() {
    int firstNumber, secondNumber;
    cin >> firstNumber >> secondNumber;

    if (firstNumber > secondNumber) cout << secondNumber << " " << firstNumber << endl;
    else cout << firstNumber << " " << secondNumber << endl;

    return 0;
}