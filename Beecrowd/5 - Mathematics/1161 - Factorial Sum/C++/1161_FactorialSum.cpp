#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b;
    while (cin >> a >> b) {
        long long sum = 0;

        for (int i = 0; i < 2; i++) {
            long long n = (i == 0) ? a : b;
            long long fact = 1;

            for (int j = 1; j <= n; j++) {
                fact *= j;
            }

            sum += fact;
        }

        cout << sum << endl;
    }

    return 0;
}
