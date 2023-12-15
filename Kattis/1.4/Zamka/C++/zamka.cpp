#include <bits/stdc++.h>

using namespace std;

int sumOfDigits(int number) {
    int sum = 0;

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int main() {
    int L, D, X;
    cin >> L >> D >> X;

    int N = L;

    while (sumOfDigits(N) != X) N++;

    cout << N << endl;

    N = D;

    while (sumOfDigits(N) != X) N--;

    cout << N << endl;

    return 0;
}