#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;
    
    for (int i = 1; i <= 10000; i++) {
        if (i % number == 2) cout << i << endl;
    }
    
    return 0;
}