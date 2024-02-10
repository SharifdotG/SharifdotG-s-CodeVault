#include <bits/stdc++.h>

using namespace std;

int main() {
    int limit, sum = 0;
    cin >> limit;

    while (limit--) {
        int number;
        cin >> number;

        sum += number;
    }

    cout << sum << endl;

    return 0;
}