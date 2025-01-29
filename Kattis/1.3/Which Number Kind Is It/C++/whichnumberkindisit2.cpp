#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int number;
        cin >> number;

        bool isOdd = (number % 2 != 0);
        bool isSquare = false;

        if (number >= 0) {
            int root = sqrt(number);
            
            if (root * root == number) {
                isSquare = true;
            }
        }

        if (isOdd && isSquare) {
            cout << "OS" << endl;
        } else if (isOdd) {
            cout << "O" << endl;
        } else if (isSquare) {
            cout << "S" << endl;
        } else {
            cout << "EMPTY" << endl;
        }
    }

    return 0;
}