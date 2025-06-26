#include <bits/stdc++.h>

using namespace std;

int main() {
    long long numbers, positionNumber;
    cin >> numbers >> positionNumber;

    long long oddNumbers = (numbers + 1) / 2;
    long long evenNumbers = numbers / 2;

    if (positionNumber <= oddNumbers) cout << 2 * positionNumber - 1 << endl;
    else cout << 2 * (positionNumber - oddNumbers) << endl;
    
    return 0;
}