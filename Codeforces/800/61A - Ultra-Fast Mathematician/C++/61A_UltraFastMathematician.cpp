#include <bits/stdc++.h>

using namespace std;

int main() {
    string firstNumber, secondNumber;
    cin >> firstNumber >> secondNumber;

    for (int i = 0; i < firstNumber.length(); i++) {
        if (firstNumber[i] == secondNumber[i]) cout << 0;
        else cout << 1;
    }
    
    return 0;
}