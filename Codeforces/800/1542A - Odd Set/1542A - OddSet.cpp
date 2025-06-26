#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number;
        cin >> number;

        int array[number * 2];
        for (int i = 0; i < number * 2; i++) {
            cin >> array[i];
        }

        int odd = 0, even = 0;

        for (int i = 0; i < number * 2; i++) {
            if (array[i] % 2 == 0) {
                even++;
            } else odd++;
        }

        if (even == odd) {
            cout << "Yes" << endl;
        } else cout << "No" << endl;
    }

    return 0;
}