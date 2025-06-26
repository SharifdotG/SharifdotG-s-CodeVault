#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    for (int i = 1; i <= number; i++) {
        cout << i << " " << i * i << " " << i * i * i << endl;
    }
    
    return 0;
}