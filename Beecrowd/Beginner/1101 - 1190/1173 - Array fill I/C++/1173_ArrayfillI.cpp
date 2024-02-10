#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    for (int i = 0; i < 10; i++) {
        cout << "N[" << i << "] = " << number << endl;
        
        number *= 2;
    }
    
    return 0;
}