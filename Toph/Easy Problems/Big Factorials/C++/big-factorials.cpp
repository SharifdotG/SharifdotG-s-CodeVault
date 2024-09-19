#include <bits/stdc++.h>

using namespace std;

int main() {
    int number, bigFactorial = 1;
    cin >> number;

    for (int i = 1; i <= number; i++) {
        bigFactorial *= i;
        bigFactorial = bigFactorial % 10000;
    }
    
    if (number < 20) {
        cout << bigFactorial << endl;
    } else {
        cout << "0000" << endl;
    }
    
    return 0;
}