#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    double x[n], y[n];
    
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    double manhattan = 0, euclidean = 0, chebyshev = 0, minkowski = 0;

    for (int i = 0; i < n; i++) {
        manhattan += abs(x[i] - y[i]);
        euclidean += pow(abs(x[i] - y[i]), 2);
        chebyshev += pow(abs(x[i] - y[i]), 3);
        minkowski = max(minkowski, abs(x[i] - y[i]));
    }

    cout << fixed << setprecision(6) << manhattan << endl;
    cout << fixed << setprecision(6) << sqrt(euclidean) << endl;
    cout << fixed << setprecision(6) << pow(chebyshev, 1.0 / 3.0) << endl;
    cout << fixed << setprecision(6) << minkowski << endl;
    
    return 0;
}