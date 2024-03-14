#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string player1, player2, choice1, choice2;
        int number1, number2;
        cin >> player1 >> choice1 >> player2 >> choice2 >> number1 >> number2;

        if ((number1 + number2) % 2 == 0) {
            if (choice1 == "PAR") {
                cout << player1 << endl;
            } else cout << player2 << endl;
        } else {
            if (choice1 == "IMPAR") {
                cout << player1 << endl;
            } else cout << player2 << endl;
        }
    }

    return 0;
}