#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, positive = 0, negative = 0, zero = 0;
    cin >> n;
    
    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];

        if (array[i] > 0) {
            positive++;
        } else if (array[i] < 0) {
            negative++;
        } else zero++;
    }

    cout << fixed << setprecision(6) << (double) positive / n << endl;
    cout << fixed << setprecision(6) << (double) negative / n << endl;
    cout << fixed << setprecision(6) << (double) zero / n << endl;
    
    return 0;
}