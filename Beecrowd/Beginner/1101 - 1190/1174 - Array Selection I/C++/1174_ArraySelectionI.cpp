#include <bits/stdc++.h>

using namespace std;

int main() {
    double number[100];

    for (int i = 0; i < 100; i++) {
        cin >> number[i];

        if (number[i] <= 10) {
            cout << "A[" << i << "] = " << fixed << setprecision(1) << number[i] << endl;
        }
    }
    
    return 0;
}