#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    int value = 1;

    while (number--) {
        cout << value << " " << value + 1 << " " << value + 2 << " PUM" << endl;
        value += 4;
    }
    
    return 0;
}