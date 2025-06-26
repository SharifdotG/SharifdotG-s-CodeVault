#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;

    if (sum % 2 == 0) {
        cout << "YES" << endl;

        vector<long long> a, b;

        sum /= 2;
        while (n) {
            if (sum - n >= 0) {
                a.push_back(n);
                sum -= n;
            } else {
                b.push_back(n);
            }

            n--;
        }

        cout << a.size() << endl;

        for (long long i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        
        cout << b.size() << endl;
        
        for (long long i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}