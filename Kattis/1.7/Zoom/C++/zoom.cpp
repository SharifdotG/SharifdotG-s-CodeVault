#include <bits/stdc++.h>

using namespace std;

int main() {
    int numbers, kThNumber;
    cin >> numbers >> kThNumber;

    for (int i = 1; i <= numbers; i++) {
        int number;
        cin >> number;

        if (i % kThNumber == 0) {
            cout << number << " ";
        }
    }

    return 0;
}
