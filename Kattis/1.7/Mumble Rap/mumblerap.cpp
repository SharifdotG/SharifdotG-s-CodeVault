#include <bits/stdc++.h>

using namespace std;

int main() {
    int characters;
    cin >> characters;

    string mumbledRap;
    cin >> mumbledRap;

    int maxNumber = 0, currentNumber = 0;

    for (int i = 0; i < characters; i++) {
        char c = mumbledRap[i];

        if (isdigit(c)) {
            currentNumber = currentNumber * 10 + (c - '0');
        } else {
            if (currentNumber > maxNumber) {
                maxNumber = currentNumber;
            }

            currentNumber = 0;
        }
    }

    if (currentNumber > maxNumber) {
        maxNumber = currentNumber;
    }

    cout << maxNumber << endl;

    return 0;
}
