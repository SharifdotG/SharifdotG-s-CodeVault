#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    
    return true;
}

int main() {
    int sum;
    while (cin >> sum && sum != 0) {
        int oddPrime1 = 0, oddPrime2 = 0;
        
        for (int i = 3; i <= sum / 2; i += 2) {
            if (isPrime(i) && isPrime(sum - i)) {
                oddPrime1 = i;
                oddPrime2 = sum - i;
                break;
            }
        }
        
        if (oddPrime1 == 0 && oddPrime2 == 0) {
            cout << "Goldbach's conjecture is wrong." << endl;
        } else {
            cout << sum << " = " << oddPrime1 << " + " << oddPrime2 << endl;
        }
    }
    
    return 0;
}