#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    long long fibonacci[61];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i <= 60; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    while (number--) {
        int index;
        cin >> index;

        cout << "Fib(" << index << ") = " << fibonacci[index] << endl;
    }
    
    return 0;
}