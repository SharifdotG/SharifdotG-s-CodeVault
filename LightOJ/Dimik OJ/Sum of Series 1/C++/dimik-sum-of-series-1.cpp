#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int x, k;
        cin >> x >> k;

        long long sum = 0;
        for (int i = 0; i <= k; i++) {
            sum += pow(x, i);
        }

        cout << "Result = " << sum << endl;
    }

    return 0;
}