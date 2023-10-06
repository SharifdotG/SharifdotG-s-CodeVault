#include <bits/stdc++.h>

using namespace std;

int main() {
    int number[10];

    for (int i = 0; i < 10; i++) {
        cin >> number[i];

        if (number[i] <= 0) number[i] = 1;
    }

    for (int i = 0; i < 10; i++) {
        cout << "X[" << i << "] = " << number[i] << endl;
    }
    
    return 0;
}