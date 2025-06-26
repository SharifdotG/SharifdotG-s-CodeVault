#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    long long n;
    cin >> s >> n;

    long long count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a') {
            count++;
        }
    }

    long long result = (n / s.size()) * count;

    for (int i = 0; i < n % s.size(); i++) {
        if (s[i] == 'a') {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}