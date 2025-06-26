#include <bits/stdc++.h>

using namespace std;

int main() {
    double realNumber;
    cin >> realNumber;

    cout << fixed << setprecision(6) << pow(realNumber, 1 / realNumber) << endl;

    return 0;
}
