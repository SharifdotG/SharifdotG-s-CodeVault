#include <bits/stdc++.h>

using namespace std;

int main() {
    int number, highest = 0, position = 0;

    for (int i = 1; i <= 100; i++) {
        cin >> number;

        if (number > highest) {
            highest = number;
            position = i;
        }
    }

    cout << highest << endl << position << endl;
    
    return 0;
}