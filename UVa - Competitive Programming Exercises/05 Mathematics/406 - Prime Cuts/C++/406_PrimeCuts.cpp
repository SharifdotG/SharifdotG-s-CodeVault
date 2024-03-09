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
    int maximumNumber, c;
    while (cin >> maximumNumber >> c) {
        vector<int> primeNumbers;
        for (int i = 1; i <= maximumNumber; i++) {
            if (isPrime(i)) primeNumbers.push_back(i);
        }
        
        cout << maximumNumber << " " << c << ":";
        if (primeNumbers.size() % 2 == 0) {
            if (2 * c >= primeNumbers.size()) {
                for (int i = 0; i < primeNumbers.size(); i++) {
                    cout << " " << primeNumbers[i];
                }
            } else {
                int startingPoint = (primeNumbers.size() / 2) - c;
                int endingPoint = (primeNumbers.size() / 2) + c - 1;
                for (int i = startingPoint; i <= endingPoint; i++) {
                    cout << " " << primeNumbers[i];
                }
            }
        } else {
            if (2 * c - 1 >= primeNumbers.size()) {
                for (int i = 0; i < primeNumbers.size(); i++) {
                    cout << " " << primeNumbers[i];
                }
            } else {
                int startingPoint = (primeNumbers.size() / 2) - c + 1;
                int endingPoint = (primeNumbers.size() / 2) + c - 1;
                for (int i = startingPoint; i <= endingPoint; i++) {
                    cout << " " << primeNumbers[i];
                }
            }
        }
        cout << endl << endl;
    }
    
    return 0;
}