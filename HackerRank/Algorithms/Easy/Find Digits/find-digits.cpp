#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int number, count = 0;
        cin >> number;

        for (int j = number; j > 0; j /= 10) {
            if (j % 10 != 0 && number % (j % 10) == 0) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}