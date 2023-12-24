#include <bits/stdc++.h>

using namespace std;

int main() {
    int value1, value2, sum = 0;
    cin >> value1 >> value2;

    if (value1 > value2) swap(value1, value2);

    for (int i = value1; i <= value2; i++) {
        if (i % 13 != 0) {
            sum += i;
        }
    }

    cout << sum << endl;
    
    return 0;
}