#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        string input;
        cin >> input;

        if (input == "P=NP") cout << "skipped" << endl;
        else {
            int plusSign = input.find('+');
            int firstNumber = stoi(input.substr(0, plusSign));
            int secondNumber = stoi(input.substr(plusSign + 1));
            
            cout << firstNumber + secondNumber << endl;
        }
    }

    return 0;
}
