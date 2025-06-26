#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    int count = 0;
    long long a = 1;

    while (true) {
        long long t = a * (a + 1) * (a + 2);

        if (t >= n) break;

        count++, a++;
    }

    cout << count << endl;

    return 0;
}