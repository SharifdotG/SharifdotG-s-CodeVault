#include <bits/stdc++.h>

using namespace std;

int main() {
    int number[20];

    for (int i = 0; i < 20; i++) {
        cin >> number[i];
    }

    for (int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << number[19 - i] << endl;
    }
    
    return 0;
}