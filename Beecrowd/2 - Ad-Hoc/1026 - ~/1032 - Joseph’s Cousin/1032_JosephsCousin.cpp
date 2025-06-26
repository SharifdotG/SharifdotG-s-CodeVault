#include <bits/stdc++.h>

using namespace std;

const int MAXN = 3501;
const int MAXPRIME = 35000;

vector<int> sieve(int n) {
    vector<int> primes;
    vector<bool> is_prime(n + 1, true);

    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    
    return primes;
}

int main() {
    vector<int> primes = sieve(MAXPRIME);

    int n;
    while (cin >> n && n) {
        vector<int> josephus;
        for (int i = 1; i <= n; i++) {
            josephus.push_back(i);
        }

        int idx = 0;
        for (int i = 0; i < n - 1; i++) {
            idx = (idx + primes[i] - 1) % josephus.size();
            josephus.erase(josephus.begin() + idx);
        }

        cout << josephus[0] << endl;
    }
    
    return 0;
}