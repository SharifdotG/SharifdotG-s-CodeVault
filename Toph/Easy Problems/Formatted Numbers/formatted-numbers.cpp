#include <bits/stdc++.h>

using namespace std;

int main() {
    string number;
    cin >> number;

    int n = number.size();
    int k = n % 3;

    if (k == 0) {
        k = 3;
    }

    cout << number.substr(0, k);

    for (int i = k; i < n; i += 3) {
        cout << "," << number.substr(i, 3);
    }

    cout << endl;
    
    return 0;
}