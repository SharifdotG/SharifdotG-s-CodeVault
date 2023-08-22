#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int soldiersOfHashmat, soldiersOfOpponent;

    while (cin >> soldiersOfHashmat >> soldiersOfOpponent) {
        cout << abs(soldiersOfHashmat - soldiersOfOpponent) << endl;
    }
    
    return 0;
}