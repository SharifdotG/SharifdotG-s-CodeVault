#include <bits/stdc++.h>

using namespace std;

int main() {
    int value1, value2;
    cin >> value1 >> value2;

    if (value1 > value2) swap(value1, value2);

    for (int i = value1 + 1; i < value2; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            cout << i << endl;
        }
    }
    
    return 0;
}