#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    int lowestNumber = 0, lowestNumberPosition = 0;

    for (int i = 1; i <= number; i++) {
        int currentNumber;
        cin >> currentNumber;

        if (i == 1) {
            lowestNumber = currentNumber;
            lowestNumberPosition = i;
        } else {
            if (currentNumber < lowestNumber) {
                lowestNumber = currentNumber;
                lowestNumberPosition = i;
            }
        }
    }

    cout << "Menor valor: " << lowestNumber << endl;
    cout << "Posicao: " << lowestNumberPosition - 1 << endl;
    
    return 0;
}