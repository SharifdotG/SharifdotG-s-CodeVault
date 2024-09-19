#include <bits/stdc++.h>

using namespace std;

int main() {
    int from, to, number, divisors = 0;
    cin >> from >> to >> number;

    for (int i = from; i <= to; i++) {
        if (number % i == 0) {
            divisors++;
        }
    }

    cout << divisors << endl;
    
    return 0;
}