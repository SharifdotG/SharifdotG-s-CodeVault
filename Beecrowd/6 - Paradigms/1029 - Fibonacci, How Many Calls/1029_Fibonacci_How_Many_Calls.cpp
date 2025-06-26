#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        vector<int> fibValues(x + 1, 0), callCounts(x + 1, 0);

        fibValues[0] = 0, fibValues[1] = 1;
        callCounts[0] = 1, callCounts[1] = 1;

        for (int j = 2; j <= x; j++) {
            fibValues[j] = fibValues[j - 1] + fibValues[j - 2];
            callCounts[j] = callCounts[j - 1] + callCounts[j - 2] +
                            1; // +1 for the current call
        }

        if (x == 0) {
            cout << "fib(" << x << ") = 1 calls = " << fibValues[x] << endl;
        } else {
            cout << "fib(" << x << ") = " << callCounts[x] - 1
                 << " calls = " << fibValues[x] << endl;
        }
    }

    return 0;
}