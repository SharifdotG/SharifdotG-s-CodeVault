#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int p, q, c;
        cin >> p >> q >> c;

        int result = 1;
        for (int i = 0; i < q; i++) {
            result = (result * p) % c;
        }

        cout << "Result = " << result << endl;
    }

    return 0;
}