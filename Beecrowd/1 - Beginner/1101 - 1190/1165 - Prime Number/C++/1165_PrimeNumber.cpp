#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    while (number--) {
        int value;
        cin >> value;

        bool isPrime = true;

        for (int j = 2; j < value; j++) {
            if (value % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) cout << value << " eh primo" << endl;
        else cout << value << " nao eh primo" << endl;
    }
    
    return 0;
}