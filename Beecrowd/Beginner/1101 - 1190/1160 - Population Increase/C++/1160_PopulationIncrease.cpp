#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, pa, pb;
    double g1, g2;
    cin >> testCases;

    while (testCases--) {
        cin >> pa >> pb >> g1 >> g2;

        int years = 0;

        while (pa <= pb) {
            pa += pa * (g1 / 100);
            pb += pb * (g2 / 100);
            years++;

            if (years > 100) {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }

        if (years <= 100) cout << years << " anos." << endl;
    }
    
    return 0;
}