#include <bits/stdc++.h>

using namespace std;

int main() {
    int par[5], impar[5], number, parIndex = 0, imparIndex = 0;

    for (int i = 0; i < 15; i++) {
        cin >> number;

        if (number % 2 == 0) {
            par[parIndex] = number;
            parIndex++;
        } else {
            impar[imparIndex] = number;
            imparIndex++;
        }

        if (parIndex == 5) {
            for (int j = 0; j < 5; j++) {
                cout << "par[" << j << "] = " << par[j] << endl;
            }

            parIndex = 0;
        }

        if (imparIndex == 5) {
            for (int j = 0; j < 5; j++) {
                cout << "impar[" << j << "] = " << impar[j] << endl;
            }
            
            imparIndex = 0;
        }
    }

    for (int i = 0; i < imparIndex; i++) {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }

    for (int i = 0; i < parIndex; i++) {
        cout << "par[" << i << "] = " << par[i] << endl;
    }
    
    return 0;
}