#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, count = 1;
    cin >> n;

    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
        count++;
    }

    cout << count << endl;

    return 0;
}
