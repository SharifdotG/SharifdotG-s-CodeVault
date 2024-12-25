#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;

        if (i >= a && i <= b) {
            sum += element;
        }
    }

    cout << sum << endl;

    return 0;
}