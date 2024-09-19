#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        int array[n], sum1 = 0, sum2 = 0;

        for (int i = 0; i < n; i++) {
            cin >> array[i];

            if (array[i] == 1) sum1++;
            else sum2++;
        }

        if (sum1 % 2 == 0 && sum1 != 0) cout << "YES" << endl;
        else if (sum1 == 0 && sum2 % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}