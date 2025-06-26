#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int cycles;
        cin >> cycles;

        int height = 1;
        for (int j = 0; j < cycles; j++) {
            if (j % 2 == 0) {
                height *= 2;
            } else {
                height++;
            }
        }

        cout << height << endl;
    }

    return 0;
}