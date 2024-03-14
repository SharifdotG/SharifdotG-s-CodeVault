#include <bits/stdc++.h>

using namespace std;

int main() {
    int pairOfSocks, daysBuysSocks;
    cin >> pairOfSocks >> daysBuysSocks;

    int days = 0;

    while (pairOfSocks > 0) {
        pairOfSocks--;
        days++;

        if (days % daysBuysSocks == 0) pairOfSocks++;
    }

    cout << days << endl;
    
    return 0;
}