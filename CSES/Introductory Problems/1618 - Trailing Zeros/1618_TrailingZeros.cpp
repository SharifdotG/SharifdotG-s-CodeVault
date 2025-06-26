#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long result = 0;
    for (long long i = 5; n / i >= 1; i *= 5) {
        result += n / i;
    }

    cout << result << endl;
    
    return 0;
}