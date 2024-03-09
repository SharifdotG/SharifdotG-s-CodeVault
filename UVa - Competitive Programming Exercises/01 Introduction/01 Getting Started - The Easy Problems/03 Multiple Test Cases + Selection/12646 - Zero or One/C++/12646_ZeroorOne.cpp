#include <bits/stdc++.h>

using namespace std;

int main() {
    int alice, beto, clara;

    while (cin >> alice >> beto >> clara) {
        if (alice == beto && beto == clara) {
            cout << "*" << endl;
        } else if (alice == beto && beto != clara) {
            cout << "C" << endl;
        } else if (alice == clara && beto != clara) {
            cout << "B" << endl;
        } else if (beto == clara && alice != clara) {
            cout << "A" << endl;
        }
    }
    
    return 0;
}